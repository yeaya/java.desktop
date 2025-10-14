#ifndef _javax_swing_plaf_metal_MetalComboBoxEditor$UIResource_h_
#define _javax_swing_plaf_metal_MetalComboBoxEditor$UIResource_h_
//$ class javax.swing.plaf.metal.MetalComboBoxEditor$UIResource
//$ extends javax.swing.plaf.metal.MetalComboBoxEditor
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalComboBoxEditor$UIResource : public ::javax::swing::plaf::metal::MetalComboBoxEditor, public ::javax::swing::plaf::UIResource {
	$class(MetalComboBoxEditor$UIResource, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalComboBoxEditor, ::javax::swing::plaf::UIResource)
public:
	MetalComboBoxEditor$UIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxEditor$UIResource_h_