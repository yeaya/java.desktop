#ifndef _javax_swing_plaf_basic_BasicDirectoryModel_h_
#define _javax_swing_plaf_basic_BasicDirectoryModel_h_
//$ class javax.swing.plaf.basic.BasicDirectoryModel
//$ extends javax.swing.AbstractListModel
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeSupport;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel$FilesLoader;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicDirectoryModel : public ::javax::swing::AbstractListModel, public ::java::beans::PropertyChangeListener {
	$class(BasicDirectoryModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::java::beans::PropertyChangeListener)
public:
	BasicDirectoryModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::AbstractListModel::fireContentsChanged;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFileChooser* filechooser);
	static void access$000(::javax::swing::plaf::basic::BasicDirectoryModel* x0, Object$* x1, int32_t x2, int32_t x3);
	static void access$100(::javax::swing::plaf::basic::BasicDirectoryModel* x0, Object$* x1, int32_t x2, int32_t x3);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual bool contains(Object$* o);
	virtual void fireContentsChanged();
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual ::java::util::Vector* getDirectories();
	virtual $Object* getElementAt(int32_t index) override;
	virtual ::java::util::Vector* getFiles();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual int32_t getSize() override;
	virtual int32_t indexOf(Object$* o);
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e);
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e);
	virtual void invalidateFileCache();
	virtual bool lt(::java::io::File* a, ::java::io::File* b);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual bool renameFile(::java::io::File* oldFile, ::java::io::File* newFile);
	void setBusy(bool busy, int32_t fid);
	virtual void sort(::java::util::Vector* v);
	virtual $String* toString() override;
	virtual void validateFileCache();
	::javax::swing::JFileChooser* filechooser = nullptr;
	::java::util::Vector* fileCache = nullptr;
	::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader* filesLoader = nullptr;
	::java::util::Vector* files = nullptr;
	::java::util::Vector* directories = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* fetchID = nullptr;
	::java::beans::PropertyChangeSupport* changeSupport = nullptr;
	bool busy = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDirectoryModel_h_