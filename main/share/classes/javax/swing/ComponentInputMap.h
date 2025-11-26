#ifndef _javax_swing_ComponentInputMap_h_
#define _javax_swing_ComponentInputMap_h_
//$ class javax.swing.ComponentInputMap
//$ extends javax.swing.InputMap

#include <javax/swing/InputMap.h>

namespace javax {
	namespace swing {
		class JComponent;
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {

class $export ComponentInputMap : public ::javax::swing::InputMap {
	$class(ComponentInputMap, $NO_CLASS_INIT, ::javax::swing::InputMap)
public:
	ComponentInputMap();
	void init$(::javax::swing::JComponent* component);
	virtual void clear() override;
	virtual ::javax::swing::JComponent* getComponent();
	virtual void put(::javax::swing::KeyStroke* keyStroke, Object$* actionMapKey) override;
	virtual void remove(::javax::swing::KeyStroke* key) override;
	virtual void setParent(::javax::swing::InputMap* map) override;
	::javax::swing::JComponent* component = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ComponentInputMap_h_