#include <imenubar.hpp>
#include <iapp.hpp>
#include <icmdhdr.hpp>
#include <ievent.hpp>
#include <iframe.hpp>
#include <istattxt.hpp>
#include <ifont.hpp>
#include <istring.hpp>
#include <icolor.hpp>
#include <icanvas.hpp>
#include <irect.hpp>
#include <ipoint.hpp>
#include <ireslib.hpp>


class TMenuWindow : public IFrameWindow,
                       public ICommandHandler
{
public:

   TMenuWindow();
   Boolean command( ICommandEvent& cmdEvent );

private:
   IMenuBar    menu;
   IStaticText status;
   ICanvas     canvasClient;
};
