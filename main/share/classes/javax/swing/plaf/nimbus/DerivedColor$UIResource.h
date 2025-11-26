#ifndef _javax_swing_plaf_nimbus_DerivedColor$UIResource_h_
#define _javax_swing_plaf_nimbus_DerivedColor$UIResource_h_
//$ class javax.swing.plaf.nimbus.DerivedColor$UIResource
//$ extends javax.swing.plaf.nimbus.DerivedColor
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class DerivedColor$UIResource : public ::javax::swing::plaf::nimbus::DerivedColor, public ::javax::swing::plaf::UIResource {
	$class(DerivedColor$UIResource, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::DerivedColor, ::javax::swing::plaf::UIResource)
public:
	DerivedColor$UIResource();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_DerivedColor$UIResource_h_