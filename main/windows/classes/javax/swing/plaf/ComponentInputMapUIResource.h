#ifndef _javax_swing_plaf_ComponentInputMapUIResource_h_
#define _javax_swing_plaf_ComponentInputMapUIResource_h_
//$ class javax.swing.plaf.ComponentInputMapUIResource
//$ extends javax.swing.ComponentInputMap
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export ComponentInputMapUIResource : public ::javax::swing::ComponentInputMap, public ::javax::swing::plaf::UIResource {
	$class(ComponentInputMapUIResource, $NO_CLASS_INIT, ::javax::swing::ComponentInputMap, ::javax::swing::plaf::UIResource)
public:
	ComponentInputMapUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComponent* component);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_ComponentInputMapUIResource_h_