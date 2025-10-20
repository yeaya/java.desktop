#include <javax/swing/text/TabSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/TabStop.h>
#include <jcpp.h>

#undef MAX_VALUE

using $TabStopArray = $Array<::javax::swing::text::TabStop>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $TabStop = ::javax::swing::text::TabStop;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _TabSet_FieldInfo_[] = {
	{"tabs", "[Ljavax/swing/text/TabStop;", nullptr, $PRIVATE, $field(TabSet, tabs)},
	{"hashCode", "I", nullptr, $PRIVATE, $field(TabSet, hashCode$)},
	{}
};

$MethodInfo _TabSet_MethodInfo_[] = {
	{"<init>", "([Ljavax/swing/text/TabStop;)V", nullptr, $PUBLIC, $method(static_cast<void(TabSet::*)($TabStopArray*)>(&TabSet::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getTab", "(I)Ljavax/swing/text/TabStop;", nullptr, $PUBLIC},
	{"getTabAfter", "(F)Ljavax/swing/text/TabStop;", nullptr, $PUBLIC},
	{"getTabCount", "()I", nullptr, $PUBLIC},
	{"getTabIndex", "(Ljavax/swing/text/TabStop;)I", nullptr, $PUBLIC},
	{"getTabIndexAfter", "(F)I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TabSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.TabSet",
	"java.lang.Object",
	"java.io.Serializable",
	_TabSet_FieldInfo_,
	_TabSet_MethodInfo_
};

$Object* allocate$TabSet($Class* clazz) {
	return $of($alloc(TabSet));
}

void TabSet::init$($TabStopArray* tabs) {
	this->hashCode$ = $Integer::MAX_VALUE;
	if (tabs != nullptr) {
		int32_t tabCount = tabs->length;
		$set(this, tabs, $new($TabStopArray, tabCount));
		$System::arraycopy(tabs, 0, this->tabs, 0, tabCount);
	} else {
		$set(this, tabs, nullptr);
	}
}

int32_t TabSet::getTabCount() {
	return (this->tabs == nullptr) ? 0 : $nc(this->tabs)->length;
}

$TabStop* TabSet::getTab(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t numTabs = getTabCount();
	if (index < 0 || index >= numTabs) {
		$throwNew($IllegalArgumentException, $$str({$$str(index), " is outside the range of tabs"_s}));
	}
	return $nc(this->tabs)->get(index);
}

$TabStop* TabSet::getTabAfter(float location) {
	int32_t index = getTabIndexAfter(location);
	return (index == -1) ? ($TabStop*)nullptr : $nc(this->tabs)->get(index);
}

int32_t TabSet::getTabIndex($TabStop* tab) {
	for (int32_t counter = getTabCount() - 1; counter >= 0; --counter) {
		if (getTab(counter) == tab) {
			return counter;
		}
	}
	return -1;
}

int32_t TabSet::getTabIndexAfter(float location) {
	int32_t current = 0;
	int32_t min = 0;
	int32_t max = 0;
	min = 0;
	max = getTabCount();
	while (min != max) {
		current = (max - min) / 2 + min;
		if (location > $nc($nc(this->tabs)->get(current))->getPosition()) {
			if (min == current) {
				min = max;
			} else {
				min = current;
			}
		} else {
			if (current == 0 || location > $nc($nc(this->tabs)->get(current - 1))->getPosition()) {
				return current;
			}
			max = current;
		}
	}
	return -1;
}

bool TabSet::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if ($instanceOf(TabSet, o)) {
		$var(TabSet, ts, $cast(TabSet, o));
		int32_t count = getTabCount();
		if ($nc(ts)->getTabCount() != count) {
			return false;
		}
		for (int32_t i = 0; i < count; ++i) {
			$var($TabStop, ts1, getTab(i));
			$var($TabStop, ts2, $nc(ts)->getTab(i));
			if ((ts1 == nullptr && ts2 != nullptr) || (ts1 != nullptr && !$nc($(getTab(i)))->equals($(ts->getTab(i))))) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int32_t TabSet::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->hashCode$ == $Integer::MAX_VALUE) {
		this->hashCode$ = 0;
		int32_t len = getTabCount();
		for (int32_t i = 0; i < len; ++i) {
			$var($TabStop, ts, getTab(i));
			this->hashCode$ ^= ts != nullptr ? $nc($(getTab(i)))->hashCode() : 0;
		}
		if (this->hashCode$ == $Integer::MAX_VALUE) {
			this->hashCode$ -= 1;
		}
	}
	return this->hashCode$;
}

$String* TabSet::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t tabCount = getTabCount();
	$var($StringBuilder, buffer, $new($StringBuilder, "[ "_s));
	for (int32_t counter = 0; counter < tabCount; ++counter) {
		if (counter > 0) {
			buffer->append(" - "_s);
		}
		buffer->append($($nc($(getTab(counter)))->toString()));
	}
	buffer->append(" ]"_s);
	return buffer->toString();
}

TabSet::TabSet() {
}

$Class* TabSet::load$($String* name, bool initialize) {
	$loadClass(TabSet, name, initialize, &_TabSet_ClassInfo_, allocate$TabSet);
	return class$;
}

$Class* TabSet::class$ = nullptr;

		} // text
	} // swing
} // javax