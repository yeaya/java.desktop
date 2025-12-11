#ifndef _com_apple_laf_AquaInternalFrameUI$CompoundUIBorder_h_
#define _com_apple_laf_AquaInternalFrameUI$CompoundUIBorder_h_
//$ class com.apple.laf.AquaInternalFrameUI$CompoundUIBorder
//$ extends javax.swing.border.CompoundBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$CompoundUIBorder : public ::javax::swing::border::CompoundBorder, public ::javax::swing::plaf::UIResource {
	$class(AquaInternalFrameUI$CompoundUIBorder, $NO_CLASS_INIT, ::javax::swing::border::CompoundBorder, ::javax::swing::plaf::UIResource)
public:
	AquaInternalFrameUI$CompoundUIBorder();
	using ::javax::swing::border::CompoundBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::border::Border* inside, ::javax::swing::border::Border* outside);
	virtual $String* toString() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$CompoundUIBorder_h_