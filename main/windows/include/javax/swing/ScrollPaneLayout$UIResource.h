#ifndef _javax_swing_ScrollPaneLayout$UIResource_h_
#define _javax_swing_ScrollPaneLayout$UIResource_h_
//$ class javax.swing.ScrollPaneLayout$UIResource
//$ extends javax.swing.ScrollPaneLayout
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/ScrollPaneLayout.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {

class $import ScrollPaneLayout$UIResource : public ::javax::swing::ScrollPaneLayout, public ::javax::swing::plaf::UIResource {
	$class(ScrollPaneLayout$UIResource, $NO_CLASS_INIT, ::javax::swing::ScrollPaneLayout, ::javax::swing::plaf::UIResource)
public:
	ScrollPaneLayout$UIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_ScrollPaneLayout$UIResource_h_