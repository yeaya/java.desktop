#ifndef _javax_swing_plaf_nimbus_NimbusLookAndFeel_h_
#define _javax_swing_plaf_nimbus_NimbusLookAndFeel_h_
//$ class javax.swing.plaf.nimbus.NimbusLookAndFeel
//$ extends javax.swing.plaf.synth.SynthLookAndFeel

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>

#pragma push_macro("COMPONENT_KEYS")
#undef COMPONENT_KEYS

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JToolBar;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusDefaults;
				class NimbusLookAndFeel$DefaultsListener;
				class NimbusStyle;
			}
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class $export NimbusLookAndFeel : public ::javax::swing::plaf::synth::SynthLookAndFeel {
	$class(NimbusLookAndFeel, 0, ::javax::swing::plaf::synth::SynthLookAndFeel)
public:
	NimbusLookAndFeel();
	void init$();
	void addDefault($String* key, Object$* value);
	static int32_t deriveARGB(::java::awt::Color* color1, ::java::awt::Color* color2, float midPoint);
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual ::java::util::Map* getDefaultsForPrefix($String* prefix);
	virtual ::java::awt::Color* getDerivedColor($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource);
	::java::awt::Color* getDerivedColor(::java::awt::Color* color1, ::java::awt::Color* color2, float midPoint, bool uiResource);
	::java::awt::Color* getDerivedColor(::java::awt::Color* color1, ::java::awt::Color* color2, float midPoint);
	virtual $String* getDescription() override;
	virtual ::javax::swing::Icon* getDisabledIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon) override;
	virtual $String* getID() override;
	virtual $String* getName() override;
	static ::javax::swing::plaf::nimbus::NimbusStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* r);
	$String* getSystemProperty($String* key);
	virtual void initialize() override;
	static $String* parsePrefix($String* key);
	virtual void register$(::javax::swing::plaf::synth::Region* region, $String* prefix);
	static $Object* resolveToolbarConstraint(::javax::swing::JToolBar* toolbar);
	virtual bool shouldUpdateStyleOnAncestorChanged() override;
	virtual bool shouldUpdateStyleOnEvent(::java::beans::PropertyChangeEvent* ev) override;
	virtual void uninitialize() override;
	static $StringArray* COMPONENT_KEYS;
	::javax::swing::plaf::nimbus::NimbusDefaults* defaults = nullptr;
	::javax::swing::UIDefaults* uiDefaults = nullptr;
	::javax::swing::plaf::nimbus::NimbusLookAndFeel$DefaultsListener* defaultsListener = nullptr;
	::java::util::Map* compiledDefaults = nullptr;
	bool defaultListenerAdded = false;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("COMPONENT_KEYS")

#endif // _javax_swing_plaf_nimbus_NimbusLookAndFeel_h_