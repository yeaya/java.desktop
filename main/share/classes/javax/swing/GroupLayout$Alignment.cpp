#include <javax/swing/GroupLayout$Alignment.h>

#include <java/lang/Enum.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef BASELINE
#undef CENTER
#undef LEADING
#undef TRAILING

using $GroupLayout$AlignmentArray = $Array<::javax::swing::GroupLayout$Alignment>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$Alignment_FieldInfo_[] = {
	{"LEADING", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupLayout$Alignment, LEADING)},
	{"TRAILING", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupLayout$Alignment, TRAILING)},
	{"CENTER", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupLayout$Alignment, CENTER)},
	{"BASELINE", "Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupLayout$Alignment, BASELINE)},
	{"$VALUES", "[Ljavax/swing/GroupLayout$Alignment;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$Alignment, $VALUES)},
	{}
};

$MethodInfo _GroupLayout$Alignment_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/GroupLayout$Alignment;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GroupLayout$AlignmentArray*(*)()>(&GroupLayout$Alignment::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GroupLayout$Alignment::*)($String*,int32_t)>(&GroupLayout$Alignment::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GroupLayout$Alignment*(*)($String*)>(&GroupLayout$Alignment::valueOf))},
	{"values", "()[Ljavax/swing/GroupLayout$Alignment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GroupLayout$AlignmentArray*(*)()>(&GroupLayout$Alignment::values))},
	{}
};

$InnerClassInfo _GroupLayout$Alignment_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$Alignment", "javax.swing.GroupLayout", "Alignment", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GroupLayout$Alignment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.GroupLayout$Alignment",
	"java.lang.Enum",
	nullptr,
	_GroupLayout$Alignment_FieldInfo_,
	_GroupLayout$Alignment_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/GroupLayout$Alignment;>;",
	nullptr,
	_GroupLayout$Alignment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$Alignment($Class* clazz) {
	return $of($alloc(GroupLayout$Alignment));
}

GroupLayout$Alignment* GroupLayout$Alignment::LEADING = nullptr;
GroupLayout$Alignment* GroupLayout$Alignment::TRAILING = nullptr;
GroupLayout$Alignment* GroupLayout$Alignment::CENTER = nullptr;
GroupLayout$Alignment* GroupLayout$Alignment::BASELINE = nullptr;
$GroupLayout$AlignmentArray* GroupLayout$Alignment::$VALUES = nullptr;

$GroupLayout$AlignmentArray* GroupLayout$Alignment::$values() {
	$init(GroupLayout$Alignment);
	return $new($GroupLayout$AlignmentArray, {
		GroupLayout$Alignment::LEADING,
		GroupLayout$Alignment::TRAILING,
		GroupLayout$Alignment::CENTER,
		GroupLayout$Alignment::BASELINE
	});
}

$GroupLayout$AlignmentArray* GroupLayout$Alignment::values() {
	$init(GroupLayout$Alignment);
	return $cast($GroupLayout$AlignmentArray, GroupLayout$Alignment::$VALUES->clone());
}

GroupLayout$Alignment* GroupLayout$Alignment::valueOf($String* name) {
	$init(GroupLayout$Alignment);
	return $cast(GroupLayout$Alignment, $Enum::valueOf(GroupLayout$Alignment::class$, name));
}

void GroupLayout$Alignment::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GroupLayout$Alignment($Class* class$) {
	$assignStatic(GroupLayout$Alignment::LEADING, $new(GroupLayout$Alignment, "LEADING"_s, 0));
	$assignStatic(GroupLayout$Alignment::TRAILING, $new(GroupLayout$Alignment, "TRAILING"_s, 1));
	$assignStatic(GroupLayout$Alignment::CENTER, $new(GroupLayout$Alignment, "CENTER"_s, 2));
	$assignStatic(GroupLayout$Alignment::BASELINE, $new(GroupLayout$Alignment, "BASELINE"_s, 3));
	$assignStatic(GroupLayout$Alignment::$VALUES, GroupLayout$Alignment::$values());
}

GroupLayout$Alignment::GroupLayout$Alignment() {
}

$Class* GroupLayout$Alignment::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$Alignment, name, initialize, &_GroupLayout$Alignment_ClassInfo_, clinit$GroupLayout$Alignment, allocate$GroupLayout$Alignment);
	return class$;
}

$Class* GroupLayout$Alignment::class$ = nullptr;

	} // swing
} // javax