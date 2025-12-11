#include <javax/swing/text/PlainView$FPMethodArgs.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/Enum.h>
#include <javax/swing/text/PlainView$2.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

#undef G
#undef GNNC
#undef GNNII
#undef IGNN
#undef IIGNN
#undef N
#undef TYPE

using $PlainView$FPMethodArgsArray = $Array<::javax::swing::text::PlainView$FPMethodArgs>;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PlainView$2 = ::javax::swing::text::PlainView$2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _PlainView$FPMethodArgs_FieldInfo_[] = {
	{"IGNN", "Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainView$FPMethodArgs, IGNN)},
	{"IIGNN", "Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainView$FPMethodArgs, IIGNN)},
	{"GNNII", "Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainView$FPMethodArgs, GNNII)},
	{"GNNC", "Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainView$FPMethodArgs, GNNC)},
	{"$VALUES", "[Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PlainView$FPMethodArgs, $VALUES)},
	{}
};

$MethodInfo _PlainView$FPMethodArgs_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PlainView$FPMethodArgsArray*(*)()>(&PlainView$FPMethodArgs::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PlainView$FPMethodArgs::*)($String*,int32_t)>(&PlainView$FPMethodArgs::init$))},
	{"getMethodArguments", "(Z)[Ljava/lang/Class;", "(Z)[Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$ClassArray*(PlainView$FPMethodArgs::*)(bool)>(&PlainView$FPMethodArgs::getMethodArguments))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PlainView$FPMethodArgs*(*)($String*)>(&PlainView$FPMethodArgs::valueOf))},
	{"values", "()[Ljavax/swing/text/PlainView$FPMethodArgs;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlainView$FPMethodArgsArray*(*)()>(&PlainView$FPMethodArgs::values))},
	{}
};

$InnerClassInfo _PlainView$FPMethodArgs_InnerClassesInfo_[] = {
	{"javax.swing.text.PlainView$FPMethodArgs", "javax.swing.text.PlainView", "FPMethodArgs", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PlainView$FPMethodArgs_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.text.PlainView$FPMethodArgs",
	"java.lang.Enum",
	nullptr,
	_PlainView$FPMethodArgs_FieldInfo_,
	_PlainView$FPMethodArgs_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/text/PlainView$FPMethodArgs;>;",
	nullptr,
	_PlainView$FPMethodArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.PlainView"
};

$Object* allocate$PlainView$FPMethodArgs($Class* clazz) {
	return $of($alloc(PlainView$FPMethodArgs));
}

PlainView$FPMethodArgs* PlainView$FPMethodArgs::IGNN = nullptr;
PlainView$FPMethodArgs* PlainView$FPMethodArgs::IIGNN = nullptr;
PlainView$FPMethodArgs* PlainView$FPMethodArgs::GNNII = nullptr;
PlainView$FPMethodArgs* PlainView$FPMethodArgs::GNNC = nullptr;
$PlainView$FPMethodArgsArray* PlainView$FPMethodArgs::$VALUES = nullptr;

$PlainView$FPMethodArgsArray* PlainView$FPMethodArgs::$values() {
	$init(PlainView$FPMethodArgs);
	return $new($PlainView$FPMethodArgsArray, {
		PlainView$FPMethodArgs::IGNN,
		PlainView$FPMethodArgs::IIGNN,
		PlainView$FPMethodArgs::GNNII,
		PlainView$FPMethodArgs::GNNC
	});
}

$PlainView$FPMethodArgsArray* PlainView$FPMethodArgs::values() {
	$init(PlainView$FPMethodArgs);
	return $cast($PlainView$FPMethodArgsArray, PlainView$FPMethodArgs::$VALUES->clone());
}

PlainView$FPMethodArgs* PlainView$FPMethodArgs::valueOf($String* name) {
	$init(PlainView$FPMethodArgs);
	return $cast(PlainView$FPMethodArgs, $Enum::valueOf(PlainView$FPMethodArgs::class$, name));
}

void PlainView$FPMethodArgs::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$ClassArray* PlainView$FPMethodArgs::getMethodArguments(bool isFPType) {
	$init($Float);
	$init($Integer);
	$Class* N = (isFPType) ? $Float::TYPE : $Integer::TYPE;
	$load($Graphics2D);
	$load($Graphics);
	$Class* G = (isFPType) ? $Graphics2D::class$ : $Graphics::class$;
	$init($PlainView$2);
	switch ($nc($PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs)->get((this)->ordinal())) {
	case 1:
		{
			return $new($ClassArray, {
				$Integer::TYPE,
				G,
				N,
				N
			});
		}
	case 2:
		{
			return $new($ClassArray, {
				$Integer::TYPE,
				$Integer::TYPE,
				G,
				N,
				N
			});
		}
	case 3:
		{
			return $new($ClassArray, {
				G,
				N,
				N,
				$Integer::TYPE,
				$Integer::TYPE
			});
		}
	case 4:
		{
			$init($Character);
			return $new($ClassArray, {
				G,
				N,
				N,
				$Character::TYPE
			});
		}
	default:
		{
			$throwNew($RuntimeException, "Unknown method arguments!"_s);
		}
	}
}

void clinit$PlainView$FPMethodArgs($Class* class$) {
	$assignStatic(PlainView$FPMethodArgs::IGNN, $new(PlainView$FPMethodArgs, "IGNN"_s, 0));
	$assignStatic(PlainView$FPMethodArgs::IIGNN, $new(PlainView$FPMethodArgs, "IIGNN"_s, 1));
	$assignStatic(PlainView$FPMethodArgs::GNNII, $new(PlainView$FPMethodArgs, "GNNII"_s, 2));
	$assignStatic(PlainView$FPMethodArgs::GNNC, $new(PlainView$FPMethodArgs, "GNNC"_s, 3));
	$assignStatic(PlainView$FPMethodArgs::$VALUES, PlainView$FPMethodArgs::$values());
}

PlainView$FPMethodArgs::PlainView$FPMethodArgs() {
}

$Class* PlainView$FPMethodArgs::load$($String* name, bool initialize) {
	$loadClass(PlainView$FPMethodArgs, name, initialize, &_PlainView$FPMethodArgs_ClassInfo_, clinit$PlainView$FPMethodArgs, allocate$PlainView$FPMethodArgs);
	return class$;
}

$Class* PlainView$FPMethodArgs::class$ = nullptr;

		} // text
	} // swing
} // javax