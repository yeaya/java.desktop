#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$ColorTree
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

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
		namespace plaf {
			namespace nimbus {
				class NimbusDefaults;
				class NimbusDefaults$ColorTree$Node;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$ColorTree : public ::java::beans::PropertyChangeListener {
	$class(NimbusDefaults$ColorTree, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	NimbusDefaults$ColorTree();
	void init$(::javax::swing::plaf::nimbus::NimbusDefaults* this$0);
	virtual void addColor($String* uin, ::java::awt::Color* color);
	virtual ::java::awt::Color* getColor($String* uin);
	::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node* getParentNode(::java::awt::Color* color);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	virtual void update();
	::javax::swing::plaf::nimbus::NimbusDefaults* this$0 = nullptr;
	::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node* root = nullptr;
	::java::util::Map* nodes = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$ColorTree_h_