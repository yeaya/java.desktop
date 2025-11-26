#ifndef _javax_swing_text_TableView$TableRow_h_
#define _javax_swing_text_TableView$TableRow_h_
//$ class javax.swing.text.TableView$TableRow
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class TableView;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import TableView$TableRow : public ::javax::swing::text::BoxView {
	$class(TableView$TableRow, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	TableView$TableRow();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::TableView* this$0, ::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void clearFilledColumns();
	virtual void fillColumn(int32_t col);
	virtual int32_t getColumnCount();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual int32_t getRow();
	virtual ::javax::swing::text::View* getViewAtPosition(int32_t pos, ::java::awt::Rectangle* a) override;
	virtual bool isFilled(int32_t col);
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void setRow(int32_t row);
	using ::javax::swing::text::BoxView::viewToModel;
	::javax::swing::text::TableView* this$0 = nullptr;
	::java::util::BitSet* fillColumns = nullptr;
	int32_t row = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TableView$TableRow_h_