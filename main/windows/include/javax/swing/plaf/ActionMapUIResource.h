#ifndef _javax_swing_plaf_ActionMapUIResource_h_
#define _javax_swing_plaf_ActionMapUIResource_h_
//$ class javax.swing.plaf.ActionMapUIResource
//$ extends javax.swing.ActionMap
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/ActionMap.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $import ActionMapUIResource : public ::javax::swing::ActionMap, public ::javax::swing::plaf::UIResource {
	$class(ActionMapUIResource, $NO_CLASS_INIT, ::javax::swing::ActionMap, ::javax::swing::plaf::UIResource)
public:
	ActionMapUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _javax_swing_plaf_ActionMapUIResource_h_