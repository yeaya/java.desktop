#ifndef _javax_swing_text_html_TableView$ColumnIterator_h_
#define _javax_swing_text_html_TableView$ColumnIterator_h_
//$ class javax.swing.text.html.TableView$ColumnIterator
//$ extends javax.swing.text.html.CSS$LayoutIterator

#include <java/lang/Array.h>
#include <javax/swing/text/html/CSS$LayoutIterator.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class TableView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class TableView$ColumnIterator : public ::javax::swing::text::html::CSS$LayoutIterator {
	$class(TableView$ColumnIterator, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$LayoutIterator)
public:
	TableView$ColumnIterator();
	void init$(::javax::swing::text::html::TableView* this$0);
	virtual void disablePercentages();
	virtual int32_t getAdjustmentWeight() override;
	virtual float getBorderWidth() override;
	virtual int32_t getCount() override;
	virtual float getLeadingCollapseSpan() override;
	virtual float getMaximumSpan(float parentSpan) override;
	virtual float getMinimumSpan(float parentSpan) override;
	virtual int32_t getOffset() override;
	virtual float getPreferredSpan(float parentSpan) override;
	virtual int32_t getSpan() override;
	virtual float getTrailingCollapseSpan() override;
	virtual void setIndex(int32_t i) override;
	virtual void setLayoutArrays($ints* offsets, $ints* spans, int32_t targetSpan);
	virtual void setOffset(int32_t offs) override;
	virtual void setSpan(int32_t span) override;
	void updatePercentagesAndAdjustmentWeights(int32_t span);
	::javax::swing::text::html::TableView* this$0 = nullptr;
	int32_t col = 0;
	$ints* percentages = nullptr;
	$ints* adjustmentWeights = nullptr;
	$ints* offsets = nullptr;
	$ints* spans = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_TableView$ColumnIterator_h_