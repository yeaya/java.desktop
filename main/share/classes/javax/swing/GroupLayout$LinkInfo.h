#ifndef _javax_swing_GroupLayout$LinkInfo_h_
#define _javax_swing_GroupLayout$LinkInfo_h_
//$ class javax.swing.GroupLayout$LinkInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout$ComponentInfo;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$LinkInfo : public ::java::lang::Object {
	$class(GroupLayout$LinkInfo, 0, ::java::lang::Object)
public:
	GroupLayout$LinkInfo();
	void init$(int32_t axis);
	virtual void add(::javax::swing::GroupLayout$ComponentInfo* child);
	int32_t calculateLinkedSize(int32_t axis);
	virtual void clearCachedSize();
	virtual int32_t getSize(int32_t axis);
	virtual void remove(::javax::swing::GroupLayout$ComponentInfo* info);
	static bool $assertionsDisabled;
	int32_t axis = 0;
	::java::util::List* linked = nullptr;
	int32_t size = 0;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$LinkInfo_h_