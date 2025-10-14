#include <sun/awt/ExtendedKeyCodes.h>

#include <java/awt/event/KeyEvent.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <jcpp.h>

#undef VK_0
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_4
#undef VK_5
#undef VK_6
#undef VK_7
#undef VK_8
#undef VK_9
#undef VK_A
#undef VK_AMPERSAND
#undef VK_ASTERISK
#undef VK_AT
#undef VK_B
#undef VK_BACK_QUOTE
#undef VK_BACK_SLASH
#undef VK_BACK_SPACE
#undef VK_BRACELEFT
#undef VK_BRACERIGHT
#undef VK_C
#undef VK_CIRCUMFLEX
#undef VK_CLOSE_BRACKET
#undef VK_COLON
#undef VK_COMMA
#undef VK_D
#undef VK_DELETE
#undef VK_DOLLAR
#undef VK_E
#undef VK_ENTER
#undef VK_EQUALS
#undef VK_ESCAPE
#undef VK_EURO_SIGN
#undef VK_EXCLAMATION_MARK
#undef VK_F
#undef VK_G
#undef VK_GREATER
#undef VK_H
#undef VK_I
#undef VK_INVERTED_EXCLAMATION_MARK
#undef VK_J
#undef VK_K
#undef VK_L
#undef VK_LEFT_PARENTHESIS
#undef VK_LESS
#undef VK_M
#undef VK_MINUS
#undef VK_N
#undef VK_NUMBER_SIGN
#undef VK_O
#undef VK_OPEN_BRACKET
#undef VK_P
#undef VK_PERIOD
#undef VK_PLUS
#undef VK_Q
#undef VK_QUOTE
#undef VK_QUOTEDBL
#undef VK_R
#undef VK_RIGHT_PARENTHESIS
#undef VK_S
#undef VK_SEMICOLON
#undef VK_SLASH
#undef VK_SPACE
#undef VK_T
#undef VK_TAB
#undef VK_U
#undef VK_UNDEFINED
#undef VK_UNDERSCORE
#undef VK_V
#undef VK_W
#undef VK_X
#undef VK_Y
#undef VK_Z

using $KeyEvent = ::java::awt::event::KeyEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;

namespace sun {
	namespace awt {

$FieldInfo _ExtendedKeyCodes_FieldInfo_[] = {
	{"regularKeyCodesMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedKeyCodes, regularKeyCodesMap)},
	{"extendedKeyCodesSet", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedKeyCodes, extendedKeyCodesSet)},
	{}
};

$MethodInfo _ExtendedKeyCodes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedKeyCodes::*)()>(&ExtendedKeyCodes::init$))},
	{"getExtendedKeyCodeForChar", "(I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&ExtendedKeyCodes::getExtendedKeyCodeForChar))},
	{}
};

$ClassInfo _ExtendedKeyCodes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.ExtendedKeyCodes",
	"java.lang.Object",
	nullptr,
	_ExtendedKeyCodes_FieldInfo_,
	_ExtendedKeyCodes_MethodInfo_
};

$Object* allocate$ExtendedKeyCodes($Class* clazz) {
	return $of($alloc(ExtendedKeyCodes));
}


$HashMap* ExtendedKeyCodes::regularKeyCodesMap = nullptr;
$HashSet* ExtendedKeyCodes::extendedKeyCodesSet = nullptr;

void ExtendedKeyCodes::init$() {
}

int32_t ExtendedKeyCodes::getExtendedKeyCodeForChar(int32_t c) {
	$init(ExtendedKeyCodes);
	int32_t uc = $Character::toUpperCase(c);
	int32_t lc = $Character::toLowerCase(c);
	if ($nc(ExtendedKeyCodes::regularKeyCodesMap)->containsKey($($Integer::valueOf(c)))) {
		if ($nc(ExtendedKeyCodes::regularKeyCodesMap)->containsKey($($Integer::valueOf(uc)))) {
			return $nc(($cast($Integer, $($nc(ExtendedKeyCodes::regularKeyCodesMap)->get($($Integer::valueOf(uc)))))))->intValue();
		}
		return $nc(($cast($Integer, $($nc(ExtendedKeyCodes::regularKeyCodesMap)->get($($Integer::valueOf(c)))))))->intValue();
	}
	uc += 0x01000000;
	lc += 0x01000000;
	if ($nc(ExtendedKeyCodes::extendedKeyCodesSet)->contains($($Integer::valueOf(uc)))) {
		return uc;
	} else {
		if ($nc(ExtendedKeyCodes::extendedKeyCodesSet)->contains($($Integer::valueOf(lc)))) {
			return lc;
		}
	}
	return $KeyEvent::VK_UNDEFINED;
}

void clinit$ExtendedKeyCodes($Class* class$) {
	$assignStatic(ExtendedKeyCodes::regularKeyCodesMap, $new($HashMap, 98, 1.0f));
	$assignStatic(ExtendedKeyCodes::extendedKeyCodesSet, $new($HashSet, 496, 1.0f));
	{
		$var($Object, var$0, $of($Integer::valueOf(8)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$0, $($Integer::valueOf($KeyEvent::VK_BACK_SPACE)));
		$var($Object, var$1, $of($Integer::valueOf(9)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$1, $($Integer::valueOf($KeyEvent::VK_TAB)));
		$var($Object, var$2, $of($Integer::valueOf(10)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$2, $($Integer::valueOf($KeyEvent::VK_ENTER)));
		$var($Object, var$3, $of($Integer::valueOf(27)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$3, $($Integer::valueOf($KeyEvent::VK_ESCAPE)));
		$var($Object, var$4, $of($Integer::valueOf(8364)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$4, $($Integer::valueOf($KeyEvent::VK_EURO_SIGN)));
		$var($Object, var$5, $of($Integer::valueOf(32)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$5, $($Integer::valueOf($KeyEvent::VK_SPACE)));
		$var($Object, var$6, $of($Integer::valueOf(33)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$6, $($Integer::valueOf($KeyEvent::VK_EXCLAMATION_MARK)));
		$var($Object, var$7, $of($Integer::valueOf(34)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$7, $($Integer::valueOf($KeyEvent::VK_QUOTEDBL)));
		$var($Object, var$8, $of($Integer::valueOf(35)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$8, $($Integer::valueOf($KeyEvent::VK_NUMBER_SIGN)));
		$var($Object, var$9, $of($Integer::valueOf(36)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$9, $($Integer::valueOf($KeyEvent::VK_DOLLAR)));
		$var($Object, var$10, $of($Integer::valueOf(38)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$10, $($Integer::valueOf($KeyEvent::VK_AMPERSAND)));
		$var($Object, var$11, $of($Integer::valueOf(39)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$11, $($Integer::valueOf($KeyEvent::VK_QUOTE)));
		$var($Object, var$12, $of($Integer::valueOf(40)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$12, $($Integer::valueOf($KeyEvent::VK_LEFT_PARENTHESIS)));
		$var($Object, var$13, $of($Integer::valueOf(41)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$13, $($Integer::valueOf($KeyEvent::VK_RIGHT_PARENTHESIS)));
		$var($Object, var$14, $of($Integer::valueOf(42)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$14, $($Integer::valueOf($KeyEvent::VK_ASTERISK)));
		$var($Object, var$15, $of($Integer::valueOf(43)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$15, $($Integer::valueOf($KeyEvent::VK_PLUS)));
		$var($Object, var$16, $of($Integer::valueOf(44)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$16, $($Integer::valueOf($KeyEvent::VK_COMMA)));
		$var($Object, var$17, $of($Integer::valueOf(45)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$17, $($Integer::valueOf($KeyEvent::VK_MINUS)));
		$var($Object, var$18, $of($Integer::valueOf(46)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$18, $($Integer::valueOf($KeyEvent::VK_PERIOD)));
		$var($Object, var$19, $of($Integer::valueOf(47)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$19, $($Integer::valueOf($KeyEvent::VK_SLASH)));
		$var($Object, var$20, $of($Integer::valueOf(48)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$20, $($Integer::valueOf($KeyEvent::VK_0)));
		$var($Object, var$21, $of($Integer::valueOf(49)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$21, $($Integer::valueOf($KeyEvent::VK_1)));
		$var($Object, var$22, $of($Integer::valueOf(50)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$22, $($Integer::valueOf($KeyEvent::VK_2)));
		$var($Object, var$23, $of($Integer::valueOf(51)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$23, $($Integer::valueOf($KeyEvent::VK_3)));
		$var($Object, var$24, $of($Integer::valueOf(52)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$24, $($Integer::valueOf($KeyEvent::VK_4)));
		$var($Object, var$25, $of($Integer::valueOf(53)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$25, $($Integer::valueOf($KeyEvent::VK_5)));
		$var($Object, var$26, $of($Integer::valueOf(54)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$26, $($Integer::valueOf($KeyEvent::VK_6)));
		$var($Object, var$27, $of($Integer::valueOf(55)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$27, $($Integer::valueOf($KeyEvent::VK_7)));
		$var($Object, var$28, $of($Integer::valueOf(56)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$28, $($Integer::valueOf($KeyEvent::VK_8)));
		$var($Object, var$29, $of($Integer::valueOf(57)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$29, $($Integer::valueOf($KeyEvent::VK_9)));
		$var($Object, var$30, $of($Integer::valueOf(58)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$30, $($Integer::valueOf($KeyEvent::VK_COLON)));
		$var($Object, var$31, $of($Integer::valueOf(59)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$31, $($Integer::valueOf($KeyEvent::VK_SEMICOLON)));
		$var($Object, var$32, $of($Integer::valueOf(60)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$32, $($Integer::valueOf($KeyEvent::VK_LESS)));
		$var($Object, var$33, $of($Integer::valueOf(61)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$33, $($Integer::valueOf($KeyEvent::VK_EQUALS)));
		$var($Object, var$34, $of($Integer::valueOf(62)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$34, $($Integer::valueOf($KeyEvent::VK_GREATER)));
		$var($Object, var$35, $of($Integer::valueOf(64)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$35, $($Integer::valueOf($KeyEvent::VK_AT)));
		$var($Object, var$36, $of($Integer::valueOf(65)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$36, $($Integer::valueOf($KeyEvent::VK_A)));
		$var($Object, var$37, $of($Integer::valueOf(66)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$37, $($Integer::valueOf($KeyEvent::VK_B)));
		$var($Object, var$38, $of($Integer::valueOf(67)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$38, $($Integer::valueOf($KeyEvent::VK_C)));
		$var($Object, var$39, $of($Integer::valueOf(68)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$39, $($Integer::valueOf($KeyEvent::VK_D)));
		$var($Object, var$40, $of($Integer::valueOf(69)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$40, $($Integer::valueOf($KeyEvent::VK_E)));
		$var($Object, var$41, $of($Integer::valueOf(70)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$41, $($Integer::valueOf($KeyEvent::VK_F)));
		$var($Object, var$42, $of($Integer::valueOf(71)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$42, $($Integer::valueOf($KeyEvent::VK_G)));
		$var($Object, var$43, $of($Integer::valueOf(72)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$43, $($Integer::valueOf($KeyEvent::VK_H)));
		$var($Object, var$44, $of($Integer::valueOf(73)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$44, $($Integer::valueOf($KeyEvent::VK_I)));
		$var($Object, var$45, $of($Integer::valueOf(74)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$45, $($Integer::valueOf($KeyEvent::VK_J)));
		$var($Object, var$46, $of($Integer::valueOf(75)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$46, $($Integer::valueOf($KeyEvent::VK_K)));
		$var($Object, var$47, $of($Integer::valueOf(76)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$47, $($Integer::valueOf($KeyEvent::VK_L)));
		$var($Object, var$48, $of($Integer::valueOf(77)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$48, $($Integer::valueOf($KeyEvent::VK_M)));
		$var($Object, var$49, $of($Integer::valueOf(78)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$49, $($Integer::valueOf($KeyEvent::VK_N)));
		$var($Object, var$50, $of($Integer::valueOf(79)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$50, $($Integer::valueOf($KeyEvent::VK_O)));
		$var($Object, var$51, $of($Integer::valueOf(80)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$51, $($Integer::valueOf($KeyEvent::VK_P)));
		$var($Object, var$52, $of($Integer::valueOf(81)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$52, $($Integer::valueOf($KeyEvent::VK_Q)));
		$var($Object, var$53, $of($Integer::valueOf(82)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$53, $($Integer::valueOf($KeyEvent::VK_R)));
		$var($Object, var$54, $of($Integer::valueOf(83)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$54, $($Integer::valueOf($KeyEvent::VK_S)));
		$var($Object, var$55, $of($Integer::valueOf(84)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$55, $($Integer::valueOf($KeyEvent::VK_T)));
		$var($Object, var$56, $of($Integer::valueOf(85)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$56, $($Integer::valueOf($KeyEvent::VK_U)));
		$var($Object, var$57, $of($Integer::valueOf(86)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$57, $($Integer::valueOf($KeyEvent::VK_V)));
		$var($Object, var$58, $of($Integer::valueOf(87)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$58, $($Integer::valueOf($KeyEvent::VK_W)));
		$var($Object, var$59, $of($Integer::valueOf(88)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$59, $($Integer::valueOf($KeyEvent::VK_X)));
		$var($Object, var$60, $of($Integer::valueOf(89)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$60, $($Integer::valueOf($KeyEvent::VK_Y)));
		$var($Object, var$61, $of($Integer::valueOf(90)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$61, $($Integer::valueOf($KeyEvent::VK_Z)));
		$var($Object, var$62, $of($Integer::valueOf(91)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$62, $($Integer::valueOf($KeyEvent::VK_OPEN_BRACKET)));
		$var($Object, var$63, $of($Integer::valueOf(92)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$63, $($Integer::valueOf($KeyEvent::VK_BACK_SLASH)));
		$var($Object, var$64, $of($Integer::valueOf(93)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$64, $($Integer::valueOf($KeyEvent::VK_CLOSE_BRACKET)));
		$var($Object, var$65, $of($Integer::valueOf(94)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$65, $($Integer::valueOf($KeyEvent::VK_CIRCUMFLEX)));
		$var($Object, var$66, $of($Integer::valueOf(95)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$66, $($Integer::valueOf($KeyEvent::VK_UNDERSCORE)));
		$var($Object, var$67, $of($Integer::valueOf(96)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$67, $($Integer::valueOf($KeyEvent::VK_BACK_QUOTE)));
		$var($Object, var$68, $of($Integer::valueOf(97)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$68, $($Integer::valueOf($KeyEvent::VK_A)));
		$var($Object, var$69, $of($Integer::valueOf(98)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$69, $($Integer::valueOf($KeyEvent::VK_B)));
		$var($Object, var$70, $of($Integer::valueOf(99)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$70, $($Integer::valueOf($KeyEvent::VK_C)));
		$var($Object, var$71, $of($Integer::valueOf(100)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$71, $($Integer::valueOf($KeyEvent::VK_D)));
		$var($Object, var$72, $of($Integer::valueOf(101)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$72, $($Integer::valueOf($KeyEvent::VK_E)));
		$var($Object, var$73, $of($Integer::valueOf(102)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$73, $($Integer::valueOf($KeyEvent::VK_F)));
		$var($Object, var$74, $of($Integer::valueOf(103)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$74, $($Integer::valueOf($KeyEvent::VK_G)));
		$var($Object, var$75, $of($Integer::valueOf(104)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$75, $($Integer::valueOf($KeyEvent::VK_H)));
		$var($Object, var$76, $of($Integer::valueOf(105)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$76, $($Integer::valueOf($KeyEvent::VK_I)));
		$var($Object, var$77, $of($Integer::valueOf(106)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$77, $($Integer::valueOf($KeyEvent::VK_J)));
		$var($Object, var$78, $of($Integer::valueOf(107)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$78, $($Integer::valueOf($KeyEvent::VK_K)));
		$var($Object, var$79, $of($Integer::valueOf(108)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$79, $($Integer::valueOf($KeyEvent::VK_L)));
		$var($Object, var$80, $of($Integer::valueOf(109)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$80, $($Integer::valueOf($KeyEvent::VK_M)));
		$var($Object, var$81, $of($Integer::valueOf(110)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$81, $($Integer::valueOf($KeyEvent::VK_N)));
		$var($Object, var$82, $of($Integer::valueOf(111)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$82, $($Integer::valueOf($KeyEvent::VK_O)));
		$var($Object, var$83, $of($Integer::valueOf(112)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$83, $($Integer::valueOf($KeyEvent::VK_P)));
		$var($Object, var$84, $of($Integer::valueOf(113)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$84, $($Integer::valueOf($KeyEvent::VK_Q)));
		$var($Object, var$85, $of($Integer::valueOf(114)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$85, $($Integer::valueOf($KeyEvent::VK_R)));
		$var($Object, var$86, $of($Integer::valueOf(115)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$86, $($Integer::valueOf($KeyEvent::VK_S)));
		$var($Object, var$87, $of($Integer::valueOf(116)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$87, $($Integer::valueOf($KeyEvent::VK_T)));
		$var($Object, var$88, $of($Integer::valueOf(117)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$88, $($Integer::valueOf($KeyEvent::VK_U)));
		$var($Object, var$89, $of($Integer::valueOf(118)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$89, $($Integer::valueOf($KeyEvent::VK_V)));
		$var($Object, var$90, $of($Integer::valueOf(119)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$90, $($Integer::valueOf($KeyEvent::VK_W)));
		$var($Object, var$91, $of($Integer::valueOf(120)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$91, $($Integer::valueOf($KeyEvent::VK_X)));
		$var($Object, var$92, $of($Integer::valueOf(121)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$92, $($Integer::valueOf($KeyEvent::VK_Y)));
		$var($Object, var$93, $of($Integer::valueOf(122)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$93, $($Integer::valueOf($KeyEvent::VK_Z)));
		$var($Object, var$94, $of($Integer::valueOf(123)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$94, $($Integer::valueOf($KeyEvent::VK_BRACELEFT)));
		$var($Object, var$95, $of($Integer::valueOf(125)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$95, $($Integer::valueOf($KeyEvent::VK_BRACERIGHT)));
		$var($Object, var$96, $of($Integer::valueOf(127)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$96, $($Integer::valueOf($KeyEvent::VK_DELETE)));
		$var($Object, var$97, $of($Integer::valueOf(161)));
		$nc(ExtendedKeyCodes::regularKeyCodesMap)->put(var$97, $($Integer::valueOf($KeyEvent::VK_INVERTED_EXCLAMATION_MARK)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 96)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 124)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 126)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 162)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 163)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 165)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 167)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 168)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 171)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 176)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 177)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 178)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 179)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 180)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 181)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 182)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 183)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 185)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 186)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 187)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 188)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 189)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 190)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 191)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 196)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 197)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 198)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 199)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 209)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 214)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 215)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 216)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 223)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 224)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 225)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 226)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 228)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 229)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 230)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 231)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 232)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 233)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 234)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 235)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 236)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 237)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 238)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 240)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 241)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 242)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 243)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 244)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 245)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 246)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 247)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 248)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 249)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 250)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 251)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 252)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 253)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 254)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 261)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 731)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 322)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 318)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 347)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 353)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 351)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 357)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 382)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 380)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 259)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 263)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 269)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 281)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 283)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 273)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 328)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 337)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 369)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 345)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 367)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 355)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 729)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 304)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 295)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 293)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 305)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 287)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 309)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 267)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 265)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 289)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 285)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 365)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 349)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 312)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 343)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 316)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 275)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 291)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 359)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 331)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 257)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 303)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 279)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 299)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 326)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 333)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 311)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 371)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 363)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 339)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12540)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12450)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12452)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12454)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12456)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12458)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12459)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12461)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12463)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12465)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12467)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12469)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12471)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12473)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12475)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12477)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12479)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12481)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12484)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12486)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12488)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12490)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12491)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12492)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12493)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12494)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12495)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12498)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12501)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12504)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12507)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12510)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12511)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12512)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12513)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12514)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12516)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12518)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12520)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12521)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12522)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12523)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12524)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12525)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12527)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12531)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12443)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 12444)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1776)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1777)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1778)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1779)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1780)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1781)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1782)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1783)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1784)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1785)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1648)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1662)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1670)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1548)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1748)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1632)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1633)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1634)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1635)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1636)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1637)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1638)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1639)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1640)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1641)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1563)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1569)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1572)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1574)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1575)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1576)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1577)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1578)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1579)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1580)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1581)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1582)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1583)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1584)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1585)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1586)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1587)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1588)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1589)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1590)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1591)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1592)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1593)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1594)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1601)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1602)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1603)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1604)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1605)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1606)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1607)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1608)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1609)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1610)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1614)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1615)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1616)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1618)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1688)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1700)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1705)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1711)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1726)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1740)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1746)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1171)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1175)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1179)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1181)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1187)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1199)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1201)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1203)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1209)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1211)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1241)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1257)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1106)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1107)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1105)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1108)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1109)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1110)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1111)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1112)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1113)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1114)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1115)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1116)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1169)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1118)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1119)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8470)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1102)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1072)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1073)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1094)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1076)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1077)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1092)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1075)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1093)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1080)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1081)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1082)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1083)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1084)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1085)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1086)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1087)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1103)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1088)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1089)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1090)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1091)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1078)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1074)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1100)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1099)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1079)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1096)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1101)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1097)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1095)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1098)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8213)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 945)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 946)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 947)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 948)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 949)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 950)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 951)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 952)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 953)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 954)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 955)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 956)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 957)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 958)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 959)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 960)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 961)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 963)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 962)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 964)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 965)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 966)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 967)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 968)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 969)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8592)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8594)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8595)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8211)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8220)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8221)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8222)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1488)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1489)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1490)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1491)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1492)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1493)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1494)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1495)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1496)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1497)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1498)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1499)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1500)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1501)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1502)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1503)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1504)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1505)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1506)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1507)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1508)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1509)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1510)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1511)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1512)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1513)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1514)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3585)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3586)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3587)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3588)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3589)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3591)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3592)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3594)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3596)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3604)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3605)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3606)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3607)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3609)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3610)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3611)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3612)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3613)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3614)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3615)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3616)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3617)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3618)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3619)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3621)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3623)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3626)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3627)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3629)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3632)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3633)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3634)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3635)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3636)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3637)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3638)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3639)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3640)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3641)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3647)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3648)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3649)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3651)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3652)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3653)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3654)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3655)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3656)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3657)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3664)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3665)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3666)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3667)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3668)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3669)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3670)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3671)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3672)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 3673)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1415)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1417)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1373)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1371)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1374)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1377)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1378)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1379)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1380)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1381)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1382)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1383)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1384)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1385)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1386)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1387)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1388)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1389)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1390)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1391)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1392)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1393)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1394)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1395)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1396)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1397)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1398)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1399)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1400)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1401)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1402)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1403)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1404)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1405)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1406)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1407)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1408)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1409)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1410)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1411)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1412)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1413)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 1414)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4304)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4305)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4306)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4307)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4308)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4309)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4310)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4311)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4312)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4313)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4314)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4315)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4316)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4317)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4318)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4319)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4320)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4321)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4322)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4323)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4324)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4325)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4326)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4327)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4328)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4329)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4330)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4331)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4332)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4333)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4334)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4335)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 4336)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 487)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 601)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 7865)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 7883)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 7885)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 7909)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 417)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 432)));
		$nc(ExtendedKeyCodes::extendedKeyCodesSet)->add($($Integer::valueOf(0x01000000 + 8363)));
	}
}

ExtendedKeyCodes::ExtendedKeyCodes() {
}

$Class* ExtendedKeyCodes::load$($String* name, bool initialize) {
	$loadClass(ExtendedKeyCodes, name, initialize, &_ExtendedKeyCodes_ClassInfo_, clinit$ExtendedKeyCodes, allocate$ExtendedKeyCodes);
	return class$;
}

$Class* ExtendedKeyCodes::class$ = nullptr;

	} // awt
} // sun