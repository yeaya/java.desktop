#ifndef _javax_swing_JTable$3_h_
#define _javax_swing_JTable$3_h_
//$ class javax.swing.JTable$3
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

class JTable$3 : public ::javax::swing::JTable$Resizable3 {
	$class(JTable$3, $NO_CLASS_INIT, ::javax::swing::JTable$Resizable3)
public:
	JTable$3();
	void init$(::javax::swing::JTable* this$0, int32_t val$end, int32_t val$start, ::javax::swing::table::TableColumnModel* val$cm);
	virtual int32_t getElementCount() override;
	virtual int32_t getLowerBoundAt(int32_t i) override;
	virtual int32_t getMidPointAt(int32_t i) override;
	virtual int32_t getUpperBoundAt(int32_t i) override;
	virtual void setSizeAt(int32_t s, int32_t i) override;
	::javax::swing::JTable* this$0 = nullptr;
	::javax::swing::table::TableColumnModel* val$cm = nullptr;
	int32_t val$start = 0;
	int32_t val$end = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$3_h_