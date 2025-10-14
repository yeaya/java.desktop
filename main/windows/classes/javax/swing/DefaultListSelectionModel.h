#ifndef _javax_swing_DefaultListSelectionModel_h_
#define _javax_swing_DefaultListSelectionModel_h_
//$ class javax.swing.DefaultListSelectionModel
//$ extends javax.swing.ListSelectionModel
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Integer.h>
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
		class EventListener;
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

class $export DefaultListSelectionModel : public ::javax::swing::ListSelectionModel, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(DefaultListSelectionModel, $NO_CLASS_INIT, ::javax::swing::ListSelectionModel, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	DefaultListSelectionModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	virtual int32_t getLeadSelectionIndex() override;
	virtual $Array<::javax::swing::event::ListSelectionListener>* getListSelectionListeners();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getMaxSelectionIndex() override;
	virtual int32_t getMinSelectionIndex() override;
	virtual int32_t getSelectionMode() override;
	virtual bool getValueIsAdjusting() override;
	virtual void insertIndexInterval(int32_t index, int32_t length, bool before) override;
	virtual bool isLeadAnchorNotificationEnabled();
	virtual bool isSelectedIndex(int32_t index) override;
	virtual bool isSelectionEmpty() override;
	void markAsDirty(int32_t r);
	virtual void moveLeadSelectionIndex(int32_t leadIndex);
	virtual void removeIndexInterval(int32_t index0, int32_t index1) override;
	virtual void removeListSelectionListener(::javax::swing::event::ListSelectionListener* l) override;
	virtual void removeSelectionInterval(int32_t index0, int32_t index1) override;
	void removeSelectionIntervalImpl(int32_t index0, int32_t index1, bool changeLeadAnchor);
	void set(int32_t r);
	virtual void setAnchorSelectionIndex(int32_t anchorIndex) override;
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
	int32_t firstAdjustedIndex = 0;
	int32_t lastAdjustedIndex = 0;
	bool isAdjusting = false;
	int32_t firstChangedIndex = 0;
	int32_t lastChangedIndex = 0;
	::java::util::BitSet* value = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	bool leadAnchorNotificationEnabled = false;
};

	} // swing
} // javax

#pragma pop_macro("MAX")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN")

#endif // _javax_swing_DefaultListSelectionModel_h_