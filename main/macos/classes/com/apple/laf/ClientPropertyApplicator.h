#ifndef _com_apple_laf_ClientPropertyApplicator_h_
#define _com_apple_laf_ClientPropertyApplicator_h_
//$ class com.apple.laf.ClientPropertyApplicator
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class ClientPropertyApplicator$Property;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ClientPropertyApplicator : public ::java::beans::PropertyChangeListener {
	$class(ClientPropertyApplicator, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	ClientPropertyApplicator();
	void init$($Array<::com::apple::laf::ClientPropertyApplicator$Property>* propertyList);
	virtual void applyProperty(Object$* target, $String* propName, Object$* value);
	virtual void attachAndApplyClientProperties(::javax::swing::JComponent* target);
	virtual $Object* convertJComponentToTarget(::javax::swing::JComponent* component);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeFrom(::javax::swing::JComponent* target);
	::java::util::Map* properties = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ClientPropertyApplicator_h_