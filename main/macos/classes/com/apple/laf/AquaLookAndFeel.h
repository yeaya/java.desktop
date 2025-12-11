#ifndef _com_apple_laf_AquaLookAndFeel_h_
#define _com_apple_laf_AquaLookAndFeel_h_
//$ class com.apple.laf.AquaLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

#pragma push_macro("PKG_PREFIX")
#undef PKG_PREFIX

namespace javax {
	namespace swing {
		class ActionMap;
		class UIDefaults;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(AquaLookAndFeel, 0, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	AquaLookAndFeel();
	void init$();
	virtual ::javax::swing::ActionMap* getAudioActionMap() override;
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	virtual bool getSupportsWindowDecorations() override;
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initialize() override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	static $Object* lambda$initComponentDefaults$0(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$1(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$10(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$11(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$12(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$13(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$14(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$15(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$16(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$17(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$18(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$19(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$2(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$20(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$21(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$23(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$24(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$25(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$26(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$27(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$28(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$29(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$3(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$30(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$31(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$32(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$35(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$37(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$38(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$39(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$4(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$40(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$41(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$42(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$43(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$5(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$6(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$7(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$8(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$9(::javax::swing::UIDefaults* t);
	virtual void uninitialize() override;
	static $String* sPropertyPrefix;
	static $String* PKG_PREFIX;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("PKG_PREFIX")

#endif // _com_apple_laf_AquaLookAndFeel_h_