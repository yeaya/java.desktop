#ifndef _javax_swing_text_html_OptionListModel_h_
#define _javax_swing_text_html_OptionListModel_h_
//$ class javax.swing.text.html.OptionListModel
//$ extends javax.swing.DefaultListModel
//$ implements javax.swing.ListSelectionModel

#include <java/lang/Array.h>
#include <java/lang/Integer.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/ListSelectionModel.h>

#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN")
#undef MIN

namespace java {
	namespace util {
		class BitSet;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class ListSelectionListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class OptionListModel : public ::javax::swing::DefaultListModel, public ::javax::swing::ListSelectionModel {
	$class(OptionListModel, $NO_CLASS_INIT, ::javax::swing::DefaultListModel, ::javax::swing::ListSelectionModel)
public:
	OptionListModel();
	using ::javax::swing::DefaultListModel::contains;
	using ::javax::swing::DefaultListModel::clear;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addListSelectionListener(::javax::swing::event::ListSelectionListener* l) override;
	virtual void addSelectionInterval(int32_t index0, int32_t index1) override;
	void changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax, bool clearFirst);
	void changeSelection(int32_t clearMin, int32_t clearMax, int32_t setMin, int32_t setMax);
	void clear(int32_t r);
	virtual void clearSelection() override;
	virtual $Object* clone() override;
	bool contains(int32_t a, int32_t b, int32_t i);
	virtual void fireValueChanged(bool isAdjusting);
	virtual void fireValueChanged(int32_t firstIndex, int32_t lastIndex);
	virtual void fireValueChanged(int32_t firstIndex, int32_t lastIndex, bool isAdjusting);
	void fireValueChanged();
	virtual int32_t getAnchorSelectionIndex() override;
	virtual ::java::util::BitSet* getInitialSelection();
	virtual int32_t getLeadSelectionIndex() override;
	virtual $Array<::javax::swing::event::ListSelectionListener>* getListSelectionListeners();
	virtual int32_t getMaxSelectionIndex() override;
	virtual int32_t getMinSelectionIndex() override;
	virtual int32_t getSelectionMode() override;
	virtual bool getValueIsAdjusting() override;
	virtual void insertIndexInterval(int32_t index, int32_t length, bool before) override;
	virtual bool isLeadAnchorNotificationEnabled();
	virtual bool isSelectedIndex(int32_t index) override;
	virtual bool isSelectionEmpty() override;
	void markAsDirty(int32_t r);
	virtual void removeIndexInterval(int32_t index0, int32_t index1) override;
	virtual void removeListSelectionListener(::javax::swing::event::ListSelectionListener* l) override;
	virtual void removeSelectionInterval(int32_t index0, int32_t index1) override;
	using ::javax::swing::DefaultListModel::set;
	void set(int32_t r);
	virtual void setAnchorSelectionIndex(int32_t anchorIndex) override;
	virtual void setInitialSelection(int32_t i);
	virtual void setLeadAnchorNotificationEnabled(bool flag);
	virtual void setLeadSelectionIndex(int32_t leadIndex) override;
	virtual void setSelectionInterval(int32_t index0, int32_t index1) override;
	virtual void setSelectionMode(int32_t selectionMode) override;
	void setState(int32_t index, bool state);
	virtual void setValueIsAdjusting(bool isAdjusting) override;
	virtual $String* toString() override;
	void updateLeadAnchorIndices(int32_t anchorIndex, int32_t leadIndex);
	static const int32_t MIN = (-1);
	static const int32_t MAX = ::java::lang::Integer::MAX_VALUE;
	int32_t selectionMode = 0;
	int32_t minIndex = 0;
	int32_t maxIndex = 0;
	int32_t anchorIndex = 0;
	int32_t leadIndex = 0;
	int32_t firstChangedIndex = 0;
	int32_t lastChangedIndex = 0;
	bool isAdjusting = false;
	::java::util::BitSet* value = nullptr;
	::java::util::BitSet* initialValue = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	bool leadAnchorNotificationEnabled = false;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("MAX")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN")

#endif // _javax_swing_text_html_OptionListModel_h_