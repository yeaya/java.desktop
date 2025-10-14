#ifndef _javax_swing_plaf_nimbus_NimbusLookAndFeel$LinkProperty_h_
#define _javax_swing_plaf_nimbus_NimbusLookAndFeel$LinkProperty_h_
//$ class javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty
//$ extends javax.swing.UIDefaults$ActiveValue
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusLookAndFeel$LinkProperty : public ::javax::swing::UIDefaults$ActiveValue, public ::javax::swing::plaf::UIResource {
	$class(NimbusLookAndFeel$LinkProperty, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue, ::javax::swing::plaf::UIResource)
public:
	NimbusLookAndFeel$LinkProperty();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0, $String* dstPropName);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	virtual $String* toString() override;
	::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0 = nullptr;
	$String* dstPropName = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusLookAndFeel$LinkProperty_h_