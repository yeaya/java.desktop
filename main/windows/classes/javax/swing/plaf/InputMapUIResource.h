#ifndef _javax_swing_plaf_InputMapUIResource_h_
#define _javax_swing_plaf_InputMapUIResource_h_
//$ class javax.swing.plaf.InputMapUIResource
//$ extends javax.swing.InputMap
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/InputMap.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $export InputMapUIResource : public ::javax::swing::InputMap, public ::javax::swing::plaf::UIResource {
	$class(InputMapUIResource, $NO_CLASS_INIT, ::javax::swing::InputMap, ::javax::swing::plaf::UIResource)
public:
	InputMapUIResource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_InputMapUIResource_h_