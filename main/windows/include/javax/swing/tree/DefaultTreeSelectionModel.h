#ifndef _javax_swing_tree_DefaultTreeSelectionModel_h_
#define _javax_swing_tree_DefaultTreeSelectionModel_h_
//$ class javax.swing.tree.DefaultTreeSelectionModel
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable,javax.swing.tree.TreeSelectionModel

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/tree/TreeSelectionModel.h>

#pragma push_macro("SELECTION_MODE_PROPERTY")
#undef SELECTION_MODE_PROPERTY

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class DefaultListSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class SwingPropertyChangeSupport;
			class TreeSelectionEvent;
			class TreeSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class RowMapper;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import DefaultTreeSelectionModel : public ::java::lang::Cloneable, public ::java::io::Serializable, public ::javax::swing::tree::TreeSelectionModel {
	$class(DefaultTreeSelectionModel, 0, ::java::lang::Cloneable, ::java::io::Serializable, ::javax::swing::tree::TreeSelectionModel)
public:
	DefaultTreeSelectionModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void addSelectionPath(::javax::swing::tree::TreePath* path) override;
	virtual void addSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	virtual void addTreeSelectionListener(::javax::swing::event::TreeSelectionListener* x) override;
	virtual bool arePathsContiguous($Array<::javax::swing::tree::TreePath>* paths);
	virtual bool canPathsBeAdded($Array<::javax::swing::tree::TreePath>* paths);
	virtual bool canPathsBeRemoved($Array<::javax::swing::tree::TreePath>* paths);
	virtual void clearSelection() override;
	virtual $Object* clone() override;
	virtual void fireValueChanged(::javax::swing::event::TreeSelectionEvent* e);
	virtual ::javax::swing::tree::TreePath* getLeadSelectionPath() override;
	virtual int32_t getLeadSelectionRow() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getMaxSelectionRow() override;
	virtual int32_t getMinSelectionRow() override;
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual ::javax::swing::tree::RowMapper* getRowMapper() override;
	virtual int32_t getSelectionCount() override;
	virtual int32_t getSelectionMode() override;
	virtual ::javax::swing::tree::TreePath* getSelectionPath() override;
	virtual $Array<::javax::swing::tree::TreePath>* getSelectionPaths() override;
	virtual $ints* getSelectionRows() override;
	virtual $Array<::javax::swing::event::TreeSelectionListener>* getTreeSelectionListeners();
	virtual void insureRowContinuity();
	virtual void insureUniqueness();
	virtual bool isPathSelected(::javax::swing::tree::TreePath* path) override;
	virtual bool isRowSelected(int32_t row) override;
	virtual bool isSelectionEmpty() override;
	virtual void notifyPathChange(::java::util::Vector* changedPaths, ::javax::swing::tree::TreePath* oldLeadSelection);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void removeSelectionPath(::javax::swing::tree::TreePath* path) override;
	virtual void removeSelectionPaths($Array<::javax::swing::tree::TreePath>* paths) override;
	virtual void removeTreeSelectionListener(::javax::swing::event::TreeSelectionListener* x) override;
	virtual void resetRowSelection() override;
	virtual void setRowMapper(::javax::swing::tree::RowMapper* newMapper) override;
	virtual void setSelectionMode(int32_t mode) override;
	virtual void setSelectionPath(::javax::swing::tree::TreePath* path) override;
	virtual void setSelectionPaths($Array<::javax::swing::tree::TreePath>* pPaths) override;
	virtual $String* toString() override;
	virtual void updateLeadIndex();
	static int32_t validateSelectionMode(int32_t mode);
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* SELECTION_MODE_PROPERTY;
	::javax::swing::event::SwingPropertyChangeSupport* changeSupport = nullptr;
	$Array<::javax::swing::tree::TreePath>* selection = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::tree::RowMapper* rowMapper = nullptr;
	::javax::swing::DefaultListSelectionModel* listSelectionModel = nullptr;
	int32_t selectionMode = 0;
	::javax::swing::tree::TreePath* leadPath = nullptr;
	int32_t leadIndex = 0;
	int32_t leadRow = 0;
	::java::util::Hashtable* uniquePaths = nullptr;
	::java::util::Hashtable* lastPaths = nullptr;
	$Array<::javax::swing::tree::TreePath>* tempPaths = nullptr;
};

		} // tree
	} // swing
} // javax

#pragma pop_macro("SELECTION_MODE_PROPERTY")

#endif // _javax_swing_tree_DefaultTreeSelectionModel_h_