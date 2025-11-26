#ifndef _javax_swing_RowFilter_h_
#define _javax_swing_RowFilter_h_
//$ class javax.swing.RowFilter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Iterable;
		class Number;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace javax {
	namespace swing {
		class RowFilter$ComparisonType;
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class $import RowFilter : public ::java::lang::Object {
	$class(RowFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RowFilter();
	void init$();
	static ::javax::swing::RowFilter* andFilter(::java::lang::Iterable* filters);
	static void checkIndices($ints* columns);
	static ::javax::swing::RowFilter* dateFilter(::javax::swing::RowFilter$ComparisonType* type, ::java::util::Date* date, $ints* indices);
	virtual bool include(::javax::swing::RowFilter$Entry* entry) {return false;}
	static ::javax::swing::RowFilter* notFilter(::javax::swing::RowFilter* filter);
	static ::javax::swing::RowFilter* numberFilter(::javax::swing::RowFilter$ComparisonType* type, ::java::lang::Number* number, $ints* indices);
	static ::javax::swing::RowFilter* orFilter(::java::lang::Iterable* filters);
	static ::javax::swing::RowFilter* regexFilter($String* regex, $ints* indices);
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter_h_