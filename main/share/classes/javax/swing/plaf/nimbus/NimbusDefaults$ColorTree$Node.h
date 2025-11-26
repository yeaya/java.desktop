#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree$Node_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree$Node_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusDefaults$ColorTree;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$ColorTree$Node : public ::java::lang::Object {
	$class(NimbusDefaults$ColorTree$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NimbusDefaults$ColorTree$Node();
	void init$(::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree* this$1, ::java::awt::Color* color, ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node* parent);
	virtual void set(::java::awt::Color* color, ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node* parent);
	virtual void update();
	::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree* this$1 = nullptr;
	::java::awt::Color* color = nullptr;
	::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node* parent = nullptr;
	::java::util::List* children = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree$Node_h_