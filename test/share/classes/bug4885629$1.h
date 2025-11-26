#ifndef _bug4885629$1_h_
#define _bug4885629$1_h_
//$ class bug4885629$1
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

class bug4885629$1 : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(bug4885629$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	bug4885629$1();
	void init$();
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
};

#endif // _bug4885629$1_h_