#ifndef _javax_swing_plaf_basic_BasicComboBoxEditor$UIResource_h_
#define _javax_swing_plaf_basic_BasicComboBoxEditor$UIResource_h_
//$ class javax.swing.plaf.basic.BasicComboBoxEditor$UIResource
//$ extends javax.swing.plaf.basic.BasicComboBoxEditor
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboBoxEditor$UIResource : public ::javax::swing::plaf::basic::BasicComboBoxEditor, public ::javax::swing::plaf::UIResource {
	$class(BasicComboBoxEditor$UIResource, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxEditor, ::javax::swing::plaf::UIResource)
public:
	BasicComboBoxEditor$UIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxEditor$UIResource_h_