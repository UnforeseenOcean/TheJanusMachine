#include "ofMain.h"
#include "testApp.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1024, 768, OF_FULLSCREEN);
	ofRunApp(new testApp());
}
