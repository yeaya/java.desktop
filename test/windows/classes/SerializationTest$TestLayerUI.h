#ifndef _SerializationTest$TestLayerUI_h_
#define _SerializationTest$TestLayerUI_h_
//$ class SerializationTest$TestLayerUI
//$ extends javax.swing.plaf.LayerUI

#include <javax/swing/plaf/LayerUI.h>

class $export SerializationTest$TestLayerUI : public ::javax::swing::plaf::LayerUI {
	$class(SerializationTest$TestLayerUI, $NO_CLASS_INIT, ::javax::swing::plaf::LayerUI)
public:
	SerializationTest$TestLayerUI();
	void init$();
	virtual $String* toString() override;
};

#endif // _SerializationTest$TestLayerUI_h_