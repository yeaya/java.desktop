#ifndef _javax_swing_plaf_basic_BasicLookAndFeel_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel
//$ extends javax.swing.LookAndFeel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/LookAndFeel.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class Clip;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class JComponent;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ColorUIResource;
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicLookAndFeel$AWTEventHelper;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicLookAndFeel : public ::javax::swing::LookAndFeel, public ::java::io::Serializable {
	$class(BasicLookAndFeel, $NO_CLASS_INIT, ::javax::swing::LookAndFeel, ::java::io::Serializable)
public:
	BasicLookAndFeel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::Action* createAudioAction(Object$* key);
	virtual ::javax::swing::ActionMap* getAudioActionMap();
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	static int32_t getFocusAcceleratorKeyMask();
	static $Object* getUIOfType(::javax::swing::plaf::ComponentUI* ui, $Class* klass);
	virtual void initClassDefaults(::javax::swing::UIDefaults* table);
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table);
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table);
	virtual void initialize() override;
	virtual void installAWTEventListener();
	static void installAudioActionMap(::javax::swing::ActionMap* map);
	static $Object* lambda$initComponentDefaults$0(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$1(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$10(::javax::swing::plaf::ColorUIResource* yellow, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$11(::java::awt::Color* controlLtHighlight, ::java::awt::Color* control, ::java::awt::Color* controlDkShadow, ::java::awt::Color* controlShadow, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$12(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$13(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$14(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$16(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$17(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$18(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$19(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$2(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$20(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$21(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$22(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$23(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$24(int32_t zero, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$25(int32_t ten, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$26(int32_t zero, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$27(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$28(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$29(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$3(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$30(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$31(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$35(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$36(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$4(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$5(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$6(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$7(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$8(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$9(::javax::swing::UIDefaults* t);
	$bytes* loadAudioData($String* soundFile);
	virtual void loadSystemColors(::javax::swing::UIDefaults* table, $StringArray* systemColors, bool useNative);
	virtual void playSound(::javax::swing::Action* audioAction);
	static void playSound(::javax::swing::JComponent* c, Object$* actionKey);
	virtual $String* toString() override;
	virtual void uninitialize() override;
	static bool needsEventHelper;
	$Object* audioLock = nullptr;
	::javax::sound::sampled::Clip* clipPlaying = nullptr;
	::javax::swing::plaf::basic::BasicLookAndFeel$AWTEventHelper* invocator = nullptr;
	::java::beans::PropertyChangeListener* disposer = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel_h_