#ifndef _javax_swing_text_TableView$TableCell_h_
#define _javax_swing_text_TableView$TableCell_h_
//$ class javax.swing.text.TableView$TableCell
//$ extends javax.swing.text.BoxView
//$ implements javax.swing.text.TableView$GridCell

#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/TableView$GridCell.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class TableView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import TableView$TableCell : public ::javax::swing::text::BoxView, public ::javax::swing::text::TableView$GridCell {
	$class(TableView$TableCell, $NO_CLASS_INIT, ::javax::swing::text::BoxView, ::javax::swing::text::TableView$GridCell)
public:
	TableView$TableCell();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::BoxView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::TableView* this$0, ::javax::swing::text::Element* elem);
	virtual int32_t getColumnCount() override;
	virtual int32_t getGridColumn() override;
	virtual int32_t getGridRow() override;
	virtual int32_t getRowCount() override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void setGridLocation(int32_t row, int32_t col) override;
	using ::javax::swing::text::BoxView::viewToModel;
	virtual $String* toString() override;
	::javax::swing::text::TableView* this$0 = nullptr;
	int32_t row = 0;
	int32_t col = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TableView$TableCell_h_