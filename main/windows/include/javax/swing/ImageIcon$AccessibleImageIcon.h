#ifndef _javax_swing_ImageIcon$AccessibleImageIcon_h_
#define _javax_swing_ImageIcon$AccessibleImageIcon_h_
//$ class javax.swing.ImageIcon$AccessibleImageIcon
//$ extends javax.accessibility.AccessibleContext
//$ implements javax.accessibility.AccessibleIcon,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleIcon.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class ImageIcon;
	}
}

namespace javax {
	namespace swing {

class $import ImageIcon$AccessibleImageIcon : public ::javax::accessibility::AccessibleContext, public ::javax::accessibility::AccessibleIcon, public ::java::io::Serializable {
	$class(ImageIcon$AccessibleImageIcon, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::javax::accessibility::AccessibleIcon, ::java::io::Serializable)
public:
	ImageIcon$AccessibleImageIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::ImageIcon* this$0);
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual $String* getAccessibleIconDescription() override;
	virtual int32_t getAccessibleIconHeight() override;
	virtual int32_t getAccessibleIconWidth() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::util::Locale* getLocale() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setAccessibleIconDescription($String* description) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::ImageIcon* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ImageIcon$AccessibleImageIcon_h_