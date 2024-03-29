#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderGitApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void CinderGitApp::setup()
{
}

void CinderGitApp::mouseDown( MouseEvent event )
{
}

void CinderGitApp::update()
{
}

void CinderGitApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( CinderGitApp, RendererGl )
