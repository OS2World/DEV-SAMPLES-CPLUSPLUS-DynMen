// Create a Menubar dynamically (ie. not from .rc file)

#include "tmbar.hpp"

void  main()
{
   TMenuWindow window;
   IApplication::current().run();
}

TMenuWindow::TMenuWindow()
 : IFrameWindow("Menu Test"),
   status( 100, this, this),
   menu(this,IMenuBar::empty),     // empty style needed
   canvasClient(200, this, this)
{  
   ICommandHandler::handleEventsFor(this);
   IFont font(&status);
   unsigned long height = font.maxCharHeight();
   addExtension(&status, 
                IFrameWindow::aboveClient, height);
   setClient(&canvasClient);

   // populate the empty menu bar
   menu.addText(20, "Item1");
   menu.addSubMenu(20);
     menu.addText(21, "Item1.1", 20);
     menu.addText(22, "Item1.2", 20);
     menu.addSubMenu(22);
       menu.addText(23,"Item1.2.2", 22);

   menu.addText(30, "Item2");

   menu.addText(40, "Item3");
   menu.addSubMenu(40);
   menu.addText(41, "Item3.1", 40);

   show();
   setFocus();
}

Boolean TMenuWindow::command( ICommandEvent& cmdEvent )
{
  status.setText(menu.menuItem(cmdEvent.commandId()).text());
  return false;
}
