#ifndef _javax_swing_JTable$2_h_
#define _javax_swing_JTable$2_h_
//$ class javax.swing.JTable$2
//$ extends javax.swing.JTable$Resizable3

#include <javax/swing/JTable$Resizable3.h>

namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableColumnModel;
		}
	}
}

namespace javax {
	namespace swing {

class JTable$2 : public ::javax::swing::JTable$Resizable3 {
	$class(JTable$2, $NO_CLASS_INIT, ::javax::swing::JTable$Resizable3)
public:
	JTable$2();
	void init$(::javax::swing::JTable* this$0, ::javax::swing::table::TableColumnModel* val$cm, bool val$inverse);
	virtual int32_t getElementCount() override;
	virtual int32_t getLowerBoundAt(int32_t i) override;
	virtual int32_t getMidPointAt(int32_t i) override;
	virtual int32_t getUpperBoundAt(int32_t i) override;
	virtual void setSizeAt(int32_t s, int32_t i) override;
	::javax::swing::JTable* this$0 = nullptr;
	bool val$inverse = false;
	::javax::swing::table::TableColumnModel* val$cm = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$2_h_