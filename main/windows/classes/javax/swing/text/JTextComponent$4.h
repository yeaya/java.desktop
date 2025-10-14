#ifndef _javax_swing_text_JTextComponent$4_h_
#define _javax_swing_text_JTextComponent$4_h_
//$ class javax.swing.text.JTextComponent$4
//$ extends com.sun.beans.util.Cache

#include <com/sun/beans/util/Cache.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace util {
				class Cache$Kind;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$4 : public ::com::sun::beans::util::Cache {
	$class(JTextComponent$4, $NO_CLASS_INIT, ::com::sun::beans::util::Cache)
public:
	JTextComponent$4();
	void init$(::com::sun::beans::util::Cache$Kind* keyKind, ::com::sun::beans::util::Cache$Kind* valueKind);
	virtual ::java::lang::Boolean* create($Class* type);
	virtual $Object* create(Object$* type) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$4_h_