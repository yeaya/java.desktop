#ifndef _bug6698013_h_
#define _bug6698013_h_
//$ class bug6698013
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

class VirtualFile;

class $export bug6698013 : public ::javax::swing::JApplet {
	$class(bug6698013, 0, ::javax::swing::JApplet)
public:
	bug6698013();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	using ::javax::swing::JApplet::list;
	void init$();
	virtual void init() override;
	static void lambda$main$0();
	static void main($StringArray* args);
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	static ::VirtualFile* root;
	static ::VirtualFile* rootFile;
	static ::VirtualFile* subdir;
	static ::VirtualFile* subdirFile;
};

#endif // _bug6698013_h_