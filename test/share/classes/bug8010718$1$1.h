#ifndef _bug8010718$1$1_h_
#define _bug8010718$1$1_h_
//$ class bug8010718$1$1
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

class bug8010718$1;
namespace java {
	namespace io {
		class File;
	}
}

class bug8010718$1$1 : public ::javax::swing::filechooser::FileFilter {
	$class(bug8010718$1$1, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	bug8010718$1$1();
	void init$(::bug8010718$1* this$0);
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
	::bug8010718$1* this$0 = nullptr;
};

#endif // _bug8010718$1$1_h_