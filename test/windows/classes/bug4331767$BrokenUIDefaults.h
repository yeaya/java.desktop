#ifndef _bug4331767$BrokenUIDefaults_h_
#define _bug4331767$BrokenUIDefaults_h_
//$ class bug4331767$BrokenUIDefaults
//$ extends javax.swing.UIDefaults

#include <javax/swing/UIDefaults.h>

namespace java {
	namespace util {
		class Locale;
	}
}

class $export bug4331767$BrokenUIDefaults : public ::javax::swing::UIDefaults {
	$class(bug4331767$BrokenUIDefaults, $NO_CLASS_INIT, ::javax::swing::UIDefaults)
public:
	bug4331767$BrokenUIDefaults();
	void init$(::javax::swing::UIDefaults* def);
	virtual $Object* get(Object$* key) override;
	virtual $Object* get(Object$* key, ::java::util::Locale* l) override;
	virtual void getUIError($String* msg) override;
	::javax::swing::UIDefaults* defaults = nullptr;
};

#endif // _bug4331767$BrokenUIDefaults_h_