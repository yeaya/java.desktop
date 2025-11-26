#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$LazyStyle_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$LazyStyle_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusDefaults;
				class NimbusDefaults$LazyStyle$Part;
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
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$LazyStyle : public ::java::lang::Object {
	$class(NimbusDefaults$LazyStyle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NimbusDefaults$LazyStyle();
	void init$(::javax::swing::plaf::nimbus::NimbusDefaults* this$0, $String* prefix);
	::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* r);
	bool matches(::javax::swing::JComponent* c);
	bool matches(::java::awt::Component* c, int32_t partIndex);
	::java::util::List* split($String* prefix);
	::javax::swing::plaf::nimbus::NimbusDefaults* this$0 = nullptr;
	$String* prefix = nullptr;
	bool simple = false;
	$Array<::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle$Part>* parts = nullptr;
	::javax::swing::plaf::nimbus::NimbusStyle* style = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$LazyStyle_h_