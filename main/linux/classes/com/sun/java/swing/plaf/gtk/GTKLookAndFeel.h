#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel
//$ extends javax.swing.plaf.synth.SynthLookAndFeel

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>

#pragma push_macro("IS_3")
#undef IS_3

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKConstants$PositionType;
						class GTKConstants$StateType;
						class GTKStyleFactory;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Font;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class LayoutStyle;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel : public ::javax::swing::plaf::synth::SynthLookAndFeel {
	$class(GTKLookAndFeel, 0, ::javax::swing::plaf::synth::SynthLookAndFeel)
public:
	GTKLookAndFeel();
	void init$();
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType* SwingOrientationConstantToGTK(int32_t side);
	bool configIconSizes($String* sizeString);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static void flushUnreferenced();
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	::com::sun::java::swing::plaf::gtk::GTKStyleFactory* getGTKStyleFactory();
	static $String* getGtkThemeName();
	virtual $String* getID() override;
	virtual ::javax::swing::LayoutStyle* getLayoutStyle() override;
	virtual $String* getName() override;
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initialize() override;
	void installPropertyChangeListeners();
	static bool is2_2();
	static bool is3();
	static bool isLeftToRight(::java::awt::Component* c);
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	static bool isText(::javax::swing::plaf::synth::Region* region);
	static $Object* lambda$initComponentDefaults$0(::javax::swing::UIDefaults* t);
	void loadStyles();
	virtual void loadSystemColors(::javax::swing::UIDefaults* table, $StringArray* systemColors, bool useNative) override;
	virtual bool shouldUpdateStyleOnAncestorChanged() override;
	static int32_t synthStateToGTKState(::javax::swing::plaf::synth::Region* region, int32_t state);
	static ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType* synthStateToGTKStateType(int32_t state);
	static bool $assertionsDisabled;
	static bool IS_22;
	static bool IS_3;
	static ::java::util::Map* aaTextInfo;
	static bool gtkAAFontSettingsCond;
	::java::awt::Font* fallbackFont = nullptr;
	bool inInitialize = false;
	bool pclInstalled = false;
	::com::sun::java::swing::plaf::gtk::GTKStyleFactory* styleFactory = nullptr;
	static $String* gtkThemeName;
	static ::java::lang::ref::ReferenceQueue* queue;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("IS_3")

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel_h_