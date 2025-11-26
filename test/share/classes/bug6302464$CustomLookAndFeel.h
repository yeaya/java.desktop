#ifndef _bug6302464$CustomLookAndFeel_h_
#define _bug6302464$CustomLookAndFeel_h_
//$ class bug6302464$CustomLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

class bug6302464$CustomLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(bug6302464$CustomLookAndFeel, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	bug6302464$CustomLookAndFeel();
	void init$(bool useAAHints);
	$Object* getAAHint();
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	$Object* getLCDContarstHint();
	virtual $String* getName() override;
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	bool useAAHints = false;
};

#endif // _bug6302464$CustomLookAndFeel_h_