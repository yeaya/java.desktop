#ifndef _javax_swing_DefaultRowSorter$FilterEntry_h_
#define _javax_swing_DefaultRowSorter$FilterEntry_h_
//$ class javax.swing.DefaultRowSorter$FilterEntry
//$ extends javax.swing.RowFilter$Entry

#include <javax/swing/RowFilter$Entry.h>

namespace javax {
	namespace swing {
		class DefaultRowSorter;
	}
}

namespace javax {
	namespace swing {

class DefaultRowSorter$FilterEntry : public ::javax::swing::RowFilter$Entry {
	$class(DefaultRowSorter$FilterEntry, $NO_CLASS_INIT, ::javax::swing::RowFilter$Entry)
public:
	DefaultRowSorter$FilterEntry();
	void init$(::javax::swing::DefaultRowSorter* this$0);
	virtual $Object* getIdentifier() override;
	virtual $Object* getModel() override;
	virtual $String* getStringValue(int32_t index) override;
	virtual $Object* getValue(int32_t index) override;
	virtual int32_t getValueCount() override;
	::javax::swing::DefaultRowSorter* this$0 = nullptr;
	int32_t modelIndex = 0;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultRowSorter$FilterEntry_h_