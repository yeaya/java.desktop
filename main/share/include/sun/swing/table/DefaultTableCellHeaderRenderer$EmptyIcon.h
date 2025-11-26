#ifndef _sun_swing_table_DefaultTableCellHeaderRenderer$EmptyIcon_h_
#define _sun_swing_table_DefaultTableCellHeaderRenderer$EmptyIcon_h_
//$ class sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace sun {
	namespace swing {
		namespace table {
			class DefaultTableCellHeaderRenderer;
		}
	}
}

namespace sun {
	namespace swing {
		namespace table {

class $import DefaultTableCellHeaderRenderer$EmptyIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(DefaultTableCellHeaderRenderer$EmptyIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	DefaultTableCellHeaderRenderer$EmptyIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::table::DefaultTableCellHeaderRenderer* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::sun::swing::table::DefaultTableCellHeaderRenderer* this$0 = nullptr;
	int32_t width = 0;
	int32_t height = 0;
};

		} // table
	} // swing
} // sun

#endif // _sun_swing_table_DefaultTableCellHeaderRenderer$EmptyIcon_h_