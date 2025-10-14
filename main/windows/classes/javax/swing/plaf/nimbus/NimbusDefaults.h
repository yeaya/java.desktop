#ifndef _javax_swing_plaf_nimbus_NimbusDefaults_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class DerivedColor;
				class NimbusDefaults$ColorTree;
				class NimbusDefaults$DefaultsListener;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthStyle;
			}
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class DefaultSynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults : public ::java::lang::Object {
	$class(NimbusDefaults, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NimbusDefaults();
	void init$();
	void addColor(::javax::swing::UIDefaults* d, $String* uin, int32_t r, int32_t g, int32_t b, int32_t a);
	void addColor(::javax::swing::UIDefaults* d, $String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset);
	void addColor(::javax::swing::UIDefaults* d, $String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource);
	void clearOverridesCache(::javax::swing::JComponent* c);
	::javax::swing::plaf::nimbus::DerivedColor* getDerivedColor($String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource);
	::javax::swing::plaf::nimbus::DerivedColor* getDerivedColor($String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource);
	::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* comp, ::javax::swing::plaf::synth::Region* r);
	void initialize();
	void initializeDefaults(::javax::swing::UIDefaults* d);
	void register$(::javax::swing::plaf::synth::Region* region, $String* prefix);
	void uninitialize();
	::java::util::Map* m = nullptr;
	::java::util::Map* registeredRegions = nullptr;
	::java::util::Map* overridesCache = nullptr;
	::sun::swing::plaf::synth::DefaultSynthStyle* defaultStyle = nullptr;
	::javax::swing::plaf::FontUIResource* defaultFont = nullptr;
	::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree* colorTree = nullptr;
	::javax::swing::plaf::nimbus::NimbusDefaults$DefaultsListener* defaultsListener = nullptr;
	::java::util::Map* derivedColors = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults_h_