#ifndef _javax_swing_plaf_basic_BasicComboBoxRenderer$UIResource_h_
#define _javax_swing_plaf_basic_BasicComboBoxRenderer$UIResource_h_
//$ class javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource
//$ extends javax.swing.plaf.basic.BasicComboBoxRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboBoxRenderer$UIResource : public ::javax::swing::plaf::basic::BasicComboBoxRenderer, public ::javax::swing::plaf::UIResource {
	$class(BasicComboBoxRenderer$UIResource, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxRenderer, ::javax::swing::plaf::UIResource)
public:
	BasicComboBoxRenderer$UIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::contains;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::enable;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::getBounds;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::getSize;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::getLocation;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::add;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::setUI;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::repaint;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::remove;
	using ::javax::swing::plaf::basic::BasicComboBoxRenderer::list;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxRenderer$UIResource_h_