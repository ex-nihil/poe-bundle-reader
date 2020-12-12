static const uint16 kReverseBits[2048] = {
0x000, 0x400, 0x200, 0x600, 0x100, 0x500, 0x300, 0x700, 0x080, 0x480, 0x280, 0x680, 0x180, 0x580, 0x380, 0x780,
0x040, 0x440, 0x240, 0x640, 0x140, 0x540, 0x340, 0x740, 0x0c0, 0x4c0, 0x2c0, 0x6c0, 0x1c0, 0x5c0, 0x3c0, 0x7c0,
0x020, 0x420, 0x220, 0x620, 0x120, 0x520, 0x320, 0x720, 0x0a0, 0x4a0, 0x2a0, 0x6a0, 0x1a0, 0x5a0, 0x3a0, 0x7a0,
0x060, 0x460, 0x260, 0x660, 0x160, 0x560, 0x360, 0x760, 0x0e0, 0x4e0, 0x2e0, 0x6e0, 0x1e0, 0x5e0, 0x3e0, 0x7e0,
0x010, 0x410, 0x210, 0x610, 0x110, 0x510, 0x310, 0x710, 0x090, 0x490, 0x290, 0x690, 0x190, 0x590, 0x390, 0x790,
0x050, 0x450, 0x250, 0x650, 0x150, 0x550, 0x350, 0x750, 0x0d0, 0x4d0, 0x2d0, 0x6d0, 0x1d0, 0x5d0, 0x3d0, 0x7d0,
0x030, 0x430, 0x230, 0x630, 0x130, 0x530, 0x330, 0x730, 0x0b0, 0x4b0, 0x2b0, 0x6b0, 0x1b0, 0x5b0, 0x3b0, 0x7b0,
0x070, 0x470, 0x270, 0x670, 0x170, 0x570, 0x370, 0x770, 0x0f0, 0x4f0, 0x2f0, 0x6f0, 0x1f0, 0x5f0, 0x3f0, 0x7f0,
0x008, 0x408, 0x208, 0x608, 0x108, 0x508, 0x308, 0x708, 0x088, 0x488, 0x288, 0x688, 0x188, 0x588, 0x388, 0x788,
0x048, 0x448, 0x248, 0x648, 0x148, 0x548, 0x348, 0x748, 0x0c8, 0x4c8, 0x2c8, 0x6c8, 0x1c8, 0x5c8, 0x3c8, 0x7c8,
0x028, 0x428, 0x228, 0x628, 0x128, 0x528, 0x328, 0x728, 0x0a8, 0x4a8, 0x2a8, 0x6a8, 0x1a8, 0x5a8, 0x3a8, 0x7a8,
0x068, 0x468, 0x268, 0x668, 0x168, 0x568, 0x368, 0x768, 0x0e8, 0x4e8, 0x2e8, 0x6e8, 0x1e8, 0x5e8, 0x3e8, 0x7e8,
0x018, 0x418, 0x218, 0x618, 0x118, 0x518, 0x318, 0x718, 0x098, 0x498, 0x298, 0x698, 0x198, 0x598, 0x398, 0x798,
0x058, 0x458, 0x258, 0x658, 0x158, 0x558, 0x358, 0x758, 0x0d8, 0x4d8, 0x2d8, 0x6d8, 0x1d8, 0x5d8, 0x3d8, 0x7d8,
0x038, 0x438, 0x238, 0x638, 0x138, 0x538, 0x338, 0x738, 0x0b8, 0x4b8, 0x2b8, 0x6b8, 0x1b8, 0x5b8, 0x3b8, 0x7b8,
0x078, 0x478, 0x278, 0x678, 0x178, 0x578, 0x378, 0x778, 0x0f8, 0x4f8, 0x2f8, 0x6f8, 0x1f8, 0x5f8, 0x3f8, 0x7f8,
0x004, 0x404, 0x204, 0x604, 0x104, 0x504, 0x304, 0x704, 0x084, 0x484, 0x284, 0x684, 0x184, 0x584, 0x384, 0x784,
0x044, 0x444, 0x244, 0x644, 0x144, 0x544, 0x344, 0x744, 0x0c4, 0x4c4, 0x2c4, 0x6c4, 0x1c4, 0x5c4, 0x3c4, 0x7c4,
0x024, 0x424, 0x224, 0x624, 0x124, 0x524, 0x324, 0x724, 0x0a4, 0x4a4, 0x2a4, 0x6a4, 0x1a4, 0x5a4, 0x3a4, 0x7a4,
0x064, 0x464, 0x264, 0x664, 0x164, 0x564, 0x364, 0x764, 0x0e4, 0x4e4, 0x2e4, 0x6e4, 0x1e4, 0x5e4, 0x3e4, 0x7e4,
0x014, 0x414, 0x214, 0x614, 0x114, 0x514, 0x314, 0x714, 0x094, 0x494, 0x294, 0x694, 0x194, 0x594, 0x394, 0x794,
0x054, 0x454, 0x254, 0x654, 0x154, 0x554, 0x354, 0x754, 0x0d4, 0x4d4, 0x2d4, 0x6d4, 0x1d4, 0x5d4, 0x3d4, 0x7d4,
0x034, 0x434, 0x234, 0x634, 0x134, 0x534, 0x334, 0x734, 0x0b4, 0x4b4, 0x2b4, 0x6b4, 0x1b4, 0x5b4, 0x3b4, 0x7b4,
0x074, 0x474, 0x274, 0x674, 0x174, 0x574, 0x374, 0x774, 0x0f4, 0x4f4, 0x2f4, 0x6f4, 0x1f4, 0x5f4, 0x3f4, 0x7f4,
0x00c, 0x40c, 0x20c, 0x60c, 0x10c, 0x50c, 0x30c, 0x70c, 0x08c, 0x48c, 0x28c, 0x68c, 0x18c, 0x58c, 0x38c, 0x78c,
0x04c, 0x44c, 0x24c, 0x64c, 0x14c, 0x54c, 0x34c, 0x74c, 0x0cc, 0x4cc, 0x2cc, 0x6cc, 0x1cc, 0x5cc, 0x3cc, 0x7cc,
0x02c, 0x42c, 0x22c, 0x62c, 0x12c, 0x52c, 0x32c, 0x72c, 0x0ac, 0x4ac, 0x2ac, 0x6ac, 0x1ac, 0x5ac, 0x3ac, 0x7ac,
0x06c, 0x46c, 0x26c, 0x66c, 0x16c, 0x56c, 0x36c, 0x76c, 0x0ec, 0x4ec, 0x2ec, 0x6ec, 0x1ec, 0x5ec, 0x3ec, 0x7ec,
0x01c, 0x41c, 0x21c, 0x61c, 0x11c, 0x51c, 0x31c, 0x71c, 0x09c, 0x49c, 0x29c, 0x69c, 0x19c, 0x59c, 0x39c, 0x79c,
0x05c, 0x45c, 0x25c, 0x65c, 0x15c, 0x55c, 0x35c, 0x75c, 0x0dc, 0x4dc, 0x2dc, 0x6dc, 0x1dc, 0x5dc, 0x3dc, 0x7dc,
0x03c, 0x43c, 0x23c, 0x63c, 0x13c, 0x53c, 0x33c, 0x73c, 0x0bc, 0x4bc, 0x2bc, 0x6bc, 0x1bc, 0x5bc, 0x3bc, 0x7bc,
0x07c, 0x47c, 0x27c, 0x67c, 0x17c, 0x57c, 0x37c, 0x77c, 0x0fc, 0x4fc, 0x2fc, 0x6fc, 0x1fc, 0x5fc, 0x3fc, 0x7fc,
0x002, 0x402, 0x202, 0x602, 0x102, 0x502, 0x302, 0x702, 0x082, 0x482, 0x282, 0x682, 0x182, 0x582, 0x382, 0x782,
0x042, 0x442, 0x242, 0x642, 0x142, 0x542, 0x342, 0x742, 0x0c2, 0x4c2, 0x2c2, 0x6c2, 0x1c2, 0x5c2, 0x3c2, 0x7c2,
0x022, 0x422, 0x222, 0x622, 0x122, 0x522, 0x322, 0x722, 0x0a2, 0x4a2, 0x2a2, 0x6a2, 0x1a2, 0x5a2, 0x3a2, 0x7a2,
0x062, 0x462, 0x262, 0x662, 0x162, 0x562, 0x362, 0x762, 0x0e2, 0x4e2, 0x2e2, 0x6e2, 0x1e2, 0x5e2, 0x3e2, 0x7e2,
0x012, 0x412, 0x212, 0x612, 0x112, 0x512, 0x312, 0x712, 0x092, 0x492, 0x292, 0x692, 0x192, 0x592, 0x392, 0x792,
0x052, 0x452, 0x252, 0x652, 0x152, 0x552, 0x352, 0x752, 0x0d2, 0x4d2, 0x2d2, 0x6d2, 0x1d2, 0x5d2, 0x3d2, 0x7d2,
0x032, 0x432, 0x232, 0x632, 0x132, 0x532, 0x332, 0x732, 0x0b2, 0x4b2, 0x2b2, 0x6b2, 0x1b2, 0x5b2, 0x3b2, 0x7b2,
0x072, 0x472, 0x272, 0x672, 0x172, 0x572, 0x372, 0x772, 0x0f2, 0x4f2, 0x2f2, 0x6f2, 0x1f2, 0x5f2, 0x3f2, 0x7f2,
0x00a, 0x40a, 0x20a, 0x60a, 0x10a, 0x50a, 0x30a, 0x70a, 0x08a, 0x48a, 0x28a, 0x68a, 0x18a, 0x58a, 0x38a, 0x78a,
0x04a, 0x44a, 0x24a, 0x64a, 0x14a, 0x54a, 0x34a, 0x74a, 0x0ca, 0x4ca, 0x2ca, 0x6ca, 0x1ca, 0x5ca, 0x3ca, 0x7ca,
0x02a, 0x42a, 0x22a, 0x62a, 0x12a, 0x52a, 0x32a, 0x72a, 0x0aa, 0x4aa, 0x2aa, 0x6aa, 0x1aa, 0x5aa, 0x3aa, 0x7aa,
0x06a, 0x46a, 0x26a, 0x66a, 0x16a, 0x56a, 0x36a, 0x76a, 0x0ea, 0x4ea, 0x2ea, 0x6ea, 0x1ea, 0x5ea, 0x3ea, 0x7ea,
0x01a, 0x41a, 0x21a, 0x61a, 0x11a, 0x51a, 0x31a, 0x71a, 0x09a, 0x49a, 0x29a, 0x69a, 0x19a, 0x59a, 0x39a, 0x79a,
0x05a, 0x45a, 0x25a, 0x65a, 0x15a, 0x55a, 0x35a, 0x75a, 0x0da, 0x4da, 0x2da, 0x6da, 0x1da, 0x5da, 0x3da, 0x7da,
0x03a, 0x43a, 0x23a, 0x63a, 0x13a, 0x53a, 0x33a, 0x73a, 0x0ba, 0x4ba, 0x2ba, 0x6ba, 0x1ba, 0x5ba, 0x3ba, 0x7ba,
0x07a, 0x47a, 0x27a, 0x67a, 0x17a, 0x57a, 0x37a, 0x77a, 0x0fa, 0x4fa, 0x2fa, 0x6fa, 0x1fa, 0x5fa, 0x3fa, 0x7fa,
0x006, 0x406, 0x206, 0x606, 0x106, 0x506, 0x306, 0x706, 0x086, 0x486, 0x286, 0x686, 0x186, 0x586, 0x386, 0x786,
0x046, 0x446, 0x246, 0x646, 0x146, 0x546, 0x346, 0x746, 0x0c6, 0x4c6, 0x2c6, 0x6c6, 0x1c6, 0x5c6, 0x3c6, 0x7c6,
0x026, 0x426, 0x226, 0x626, 0x126, 0x526, 0x326, 0x726, 0x0a6, 0x4a6, 0x2a6, 0x6a6, 0x1a6, 0x5a6, 0x3a6, 0x7a6,
0x066, 0x466, 0x266, 0x666, 0x166, 0x566, 0x366, 0x766, 0x0e6, 0x4e6, 0x2e6, 0x6e6, 0x1e6, 0x5e6, 0x3e6, 0x7e6,
0x016, 0x416, 0x216, 0x616, 0x116, 0x516, 0x316, 0x716, 0x096, 0x496, 0x296, 0x696, 0x196, 0x596, 0x396, 0x796,
0x056, 0x456, 0x256, 0x656, 0x156, 0x556, 0x356, 0x756, 0x0d6, 0x4d6, 0x2d6, 0x6d6, 0x1d6, 0x5d6, 0x3d6, 0x7d6,
0x036, 0x436, 0x236, 0x636, 0x136, 0x536, 0x336, 0x736, 0x0b6, 0x4b6, 0x2b6, 0x6b6, 0x1b6, 0x5b6, 0x3b6, 0x7b6,
0x076, 0x476, 0x276, 0x676, 0x176, 0x576, 0x376, 0x776, 0x0f6, 0x4f6, 0x2f6, 0x6f6, 0x1f6, 0x5f6, 0x3f6, 0x7f6,
0x00e, 0x40e, 0x20e, 0x60e, 0x10e, 0x50e, 0x30e, 0x70e, 0x08e, 0x48e, 0x28e, 0x68e, 0x18e, 0x58e, 0x38e, 0x78e,
0x04e, 0x44e, 0x24e, 0x64e, 0x14e, 0x54e, 0x34e, 0x74e, 0x0ce, 0x4ce, 0x2ce, 0x6ce, 0x1ce, 0x5ce, 0x3ce, 0x7ce,
0x02e, 0x42e, 0x22e, 0x62e, 0x12e, 0x52e, 0x32e, 0x72e, 0x0ae, 0x4ae, 0x2ae, 0x6ae, 0x1ae, 0x5ae, 0x3ae, 0x7ae,
0x06e, 0x46e, 0x26e, 0x66e, 0x16e, 0x56e, 0x36e, 0x76e, 0x0ee, 0x4ee, 0x2ee, 0x6ee, 0x1ee, 0x5ee, 0x3ee, 0x7ee,
0x01e, 0x41e, 0x21e, 0x61e, 0x11e, 0x51e, 0x31e, 0x71e, 0x09e, 0x49e, 0x29e, 0x69e, 0x19e, 0x59e, 0x39e, 0x79e,
0x05e, 0x45e, 0x25e, 0x65e, 0x15e, 0x55e, 0x35e, 0x75e, 0x0de, 0x4de, 0x2de, 0x6de, 0x1de, 0x5de, 0x3de, 0x7de,
0x03e, 0x43e, 0x23e, 0x63e, 0x13e, 0x53e, 0x33e, 0x73e, 0x0be, 0x4be, 0x2be, 0x6be, 0x1be, 0x5be, 0x3be, 0x7be,
0x07e, 0x47e, 0x27e, 0x67e, 0x17e, 0x57e, 0x37e, 0x77e, 0x0fe, 0x4fe, 0x2fe, 0x6fe, 0x1fe, 0x5fe, 0x3fe, 0x7fe,
0x001, 0x401, 0x201, 0x601, 0x101, 0x501, 0x301, 0x701, 0x081, 0x481, 0x281, 0x681, 0x181, 0x581, 0x381, 0x781,
0x041, 0x441, 0x241, 0x641, 0x141, 0x541, 0x341, 0x741, 0x0c1, 0x4c1, 0x2c1, 0x6c1, 0x1c1, 0x5c1, 0x3c1, 0x7c1,
0x021, 0x421, 0x221, 0x621, 0x121, 0x521, 0x321, 0x721, 0x0a1, 0x4a1, 0x2a1, 0x6a1, 0x1a1, 0x5a1, 0x3a1, 0x7a1,
0x061, 0x461, 0x261, 0x661, 0x161, 0x561, 0x361, 0x761, 0x0e1, 0x4e1, 0x2e1, 0x6e1, 0x1e1, 0x5e1, 0x3e1, 0x7e1,
0x011, 0x411, 0x211, 0x611, 0x111, 0x511, 0x311, 0x711, 0x091, 0x491, 0x291, 0x691, 0x191, 0x591, 0x391, 0x791,
0x051, 0x451, 0x251, 0x651, 0x151, 0x551, 0x351, 0x751, 0x0d1, 0x4d1, 0x2d1, 0x6d1, 0x1d1, 0x5d1, 0x3d1, 0x7d1,
0x031, 0x431, 0x231, 0x631, 0x131, 0x531, 0x331, 0x731, 0x0b1, 0x4b1, 0x2b1, 0x6b1, 0x1b1, 0x5b1, 0x3b1, 0x7b1,
0x071, 0x471, 0x271, 0x671, 0x171, 0x571, 0x371, 0x771, 0x0f1, 0x4f1, 0x2f1, 0x6f1, 0x1f1, 0x5f1, 0x3f1, 0x7f1,
0x009, 0x409, 0x209, 0x609, 0x109, 0x509, 0x309, 0x709, 0x089, 0x489, 0x289, 0x689, 0x189, 0x589, 0x389, 0x789,
0x049, 0x449, 0x249, 0x649, 0x149, 0x549, 0x349, 0x749, 0x0c9, 0x4c9, 0x2c9, 0x6c9, 0x1c9, 0x5c9, 0x3c9, 0x7c9,
0x029, 0x429, 0x229, 0x629, 0x129, 0x529, 0x329, 0x729, 0x0a9, 0x4a9, 0x2a9, 0x6a9, 0x1a9, 0x5a9, 0x3a9, 0x7a9,
0x069, 0x469, 0x269, 0x669, 0x169, 0x569, 0x369, 0x769, 0x0e9, 0x4e9, 0x2e9, 0x6e9, 0x1e9, 0x5e9, 0x3e9, 0x7e9,
0x019, 0x419, 0x219, 0x619, 0x119, 0x519, 0x319, 0x719, 0x099, 0x499, 0x299, 0x699, 0x199, 0x599, 0x399, 0x799,
0x059, 0x459, 0x259, 0x659, 0x159, 0x559, 0x359, 0x759, 0x0d9, 0x4d9, 0x2d9, 0x6d9, 0x1d9, 0x5d9, 0x3d9, 0x7d9,
0x039, 0x439, 0x239, 0x639, 0x139, 0x539, 0x339, 0x739, 0x0b9, 0x4b9, 0x2b9, 0x6b9, 0x1b9, 0x5b9, 0x3b9, 0x7b9,
0x079, 0x479, 0x279, 0x679, 0x179, 0x579, 0x379, 0x779, 0x0f9, 0x4f9, 0x2f9, 0x6f9, 0x1f9, 0x5f9, 0x3f9, 0x7f9,
0x005, 0x405, 0x205, 0x605, 0x105, 0x505, 0x305, 0x705, 0x085, 0x485, 0x285, 0x685, 0x185, 0x585, 0x385, 0x785,
0x045, 0x445, 0x245, 0x645, 0x145, 0x545, 0x345, 0x745, 0x0c5, 0x4c5, 0x2c5, 0x6c5, 0x1c5, 0x5c5, 0x3c5, 0x7c5,
0x025, 0x425, 0x225, 0x625, 0x125, 0x525, 0x325, 0x725, 0x0a5, 0x4a5, 0x2a5, 0x6a5, 0x1a5, 0x5a5, 0x3a5, 0x7a5,
0x065, 0x465, 0x265, 0x665, 0x165, 0x565, 0x365, 0x765, 0x0e5, 0x4e5, 0x2e5, 0x6e5, 0x1e5, 0x5e5, 0x3e5, 0x7e5,
0x015, 0x415, 0x215, 0x615, 0x115, 0x515, 0x315, 0x715, 0x095, 0x495, 0x295, 0x695, 0x195, 0x595, 0x395, 0x795,
0x055, 0x455, 0x255, 0x655, 0x155, 0x555, 0x355, 0x755, 0x0d5, 0x4d5, 0x2d5, 0x6d5, 0x1d5, 0x5d5, 0x3d5, 0x7d5,
0x035, 0x435, 0x235, 0x635, 0x135, 0x535, 0x335, 0x735, 0x0b5, 0x4b5, 0x2b5, 0x6b5, 0x1b5, 0x5b5, 0x3b5, 0x7b5,
0x075, 0x475, 0x275, 0x675, 0x175, 0x575, 0x375, 0x775, 0x0f5, 0x4f5, 0x2f5, 0x6f5, 0x1f5, 0x5f5, 0x3f5, 0x7f5,
0x00d, 0x40d, 0x20d, 0x60d, 0x10d, 0x50d, 0x30d, 0x70d, 0x08d, 0x48d, 0x28d, 0x68d, 0x18d, 0x58d, 0x38d, 0x78d,
0x04d, 0x44d, 0x24d, 0x64d, 0x14d, 0x54d, 0x34d, 0x74d, 0x0cd, 0x4cd, 0x2cd, 0x6cd, 0x1cd, 0x5cd, 0x3cd, 0x7cd,
0x02d, 0x42d, 0x22d, 0x62d, 0x12d, 0x52d, 0x32d, 0x72d, 0x0ad, 0x4ad, 0x2ad, 0x6ad, 0x1ad, 0x5ad, 0x3ad, 0x7ad,
0x06d, 0x46d, 0x26d, 0x66d, 0x16d, 0x56d, 0x36d, 0x76d, 0x0ed, 0x4ed, 0x2ed, 0x6ed, 0x1ed, 0x5ed, 0x3ed, 0x7ed,
0x01d, 0x41d, 0x21d, 0x61d, 0x11d, 0x51d, 0x31d, 0x71d, 0x09d, 0x49d, 0x29d, 0x69d, 0x19d, 0x59d, 0x39d, 0x79d,
0x05d, 0x45d, 0x25d, 0x65d, 0x15d, 0x55d, 0x35d, 0x75d, 0x0dd, 0x4dd, 0x2dd, 0x6dd, 0x1dd, 0x5dd, 0x3dd, 0x7dd,
0x03d, 0x43d, 0x23d, 0x63d, 0x13d, 0x53d, 0x33d, 0x73d, 0x0bd, 0x4bd, 0x2bd, 0x6bd, 0x1bd, 0x5bd, 0x3bd, 0x7bd,
0x07d, 0x47d, 0x27d, 0x67d, 0x17d, 0x57d, 0x37d, 0x77d, 0x0fd, 0x4fd, 0x2fd, 0x6fd, 0x1fd, 0x5fd, 0x3fd, 0x7fd,
0x003, 0x403, 0x203, 0x603, 0x103, 0x503, 0x303, 0x703, 0x083, 0x483, 0x283, 0x683, 0x183, 0x583, 0x383, 0x783,
0x043, 0x443, 0x243, 0x643, 0x143, 0x543, 0x343, 0x743, 0x0c3, 0x4c3, 0x2c3, 0x6c3, 0x1c3, 0x5c3, 0x3c3, 0x7c3,
0x023, 0x423, 0x223, 0x623, 0x123, 0x523, 0x323, 0x723, 0x0a3, 0x4a3, 0x2a3, 0x6a3, 0x1a3, 0x5a3, 0x3a3, 0x7a3,
0x063, 0x463, 0x263, 0x663, 0x163, 0x563, 0x363, 0x763, 0x0e3, 0x4e3, 0x2e3, 0x6e3, 0x1e3, 0x5e3, 0x3e3, 0x7e3,
0x013, 0x413, 0x213, 0x613, 0x113, 0x513, 0x313, 0x713, 0x093, 0x493, 0x293, 0x693, 0x193, 0x593, 0x393, 0x793,
0x053, 0x453, 0x253, 0x653, 0x153, 0x553, 0x353, 0x753, 0x0d3, 0x4d3, 0x2d3, 0x6d3, 0x1d3, 0x5d3, 0x3d3, 0x7d3,
0x033, 0x433, 0x233, 0x633, 0x133, 0x533, 0x333, 0x733, 0x0b3, 0x4b3, 0x2b3, 0x6b3, 0x1b3, 0x5b3, 0x3b3, 0x7b3,
0x073, 0x473, 0x273, 0x673, 0x173, 0x573, 0x373, 0x773, 0x0f3, 0x4f3, 0x2f3, 0x6f3, 0x1f3, 0x5f3, 0x3f3, 0x7f3,
0x00b, 0x40b, 0x20b, 0x60b, 0x10b, 0x50b, 0x30b, 0x70b, 0x08b, 0x48b, 0x28b, 0x68b, 0x18b, 0x58b, 0x38b, 0x78b,
0x04b, 0x44b, 0x24b, 0x64b, 0x14b, 0x54b, 0x34b, 0x74b, 0x0cb, 0x4cb, 0x2cb, 0x6cb, 0x1cb, 0x5cb, 0x3cb, 0x7cb,
0x02b, 0x42b, 0x22b, 0x62b, 0x12b, 0x52b, 0x32b, 0x72b, 0x0ab, 0x4ab, 0x2ab, 0x6ab, 0x1ab, 0x5ab, 0x3ab, 0x7ab,
0x06b, 0x46b, 0x26b, 0x66b, 0x16b, 0x56b, 0x36b, 0x76b, 0x0eb, 0x4eb, 0x2eb, 0x6eb, 0x1eb, 0x5eb, 0x3eb, 0x7eb,
0x01b, 0x41b, 0x21b, 0x61b, 0x11b, 0x51b, 0x31b, 0x71b, 0x09b, 0x49b, 0x29b, 0x69b, 0x19b, 0x59b, 0x39b, 0x79b,
0x05b, 0x45b, 0x25b, 0x65b, 0x15b, 0x55b, 0x35b, 0x75b, 0x0db, 0x4db, 0x2db, 0x6db, 0x1db, 0x5db, 0x3db, 0x7db,
0x03b, 0x43b, 0x23b, 0x63b, 0x13b, 0x53b, 0x33b, 0x73b, 0x0bb, 0x4bb, 0x2bb, 0x6bb, 0x1bb, 0x5bb, 0x3bb, 0x7bb,
0x07b, 0x47b, 0x27b, 0x67b, 0x17b, 0x57b, 0x37b, 0x77b, 0x0fb, 0x4fb, 0x2fb, 0x6fb, 0x1fb, 0x5fb, 0x3fb, 0x7fb,
0x007, 0x407, 0x207, 0x607, 0x107, 0x507, 0x307, 0x707, 0x087, 0x487, 0x287, 0x687, 0x187, 0x587, 0x387, 0x787,
0x047, 0x447, 0x247, 0x647, 0x147, 0x547, 0x347, 0x747, 0x0c7, 0x4c7, 0x2c7, 0x6c7, 0x1c7, 0x5c7, 0x3c7, 0x7c7,
0x027, 0x427, 0x227, 0x627, 0x127, 0x527, 0x327, 0x727, 0x0a7, 0x4a7, 0x2a7, 0x6a7, 0x1a7, 0x5a7, 0x3a7, 0x7a7,
0x067, 0x467, 0x267, 0x667, 0x167, 0x567, 0x367, 0x767, 0x0e7, 0x4e7, 0x2e7, 0x6e7, 0x1e7, 0x5e7, 0x3e7, 0x7e7,
0x017, 0x417, 0x217, 0x617, 0x117, 0x517, 0x317, 0x717, 0x097, 0x497, 0x297, 0x697, 0x197, 0x597, 0x397, 0x797,
0x057, 0x457, 0x257, 0x657, 0x157, 0x557, 0x357, 0x757, 0x0d7, 0x4d7, 0x2d7, 0x6d7, 0x1d7, 0x5d7, 0x3d7, 0x7d7,
0x037, 0x437, 0x237, 0x637, 0x137, 0x537, 0x337, 0x737, 0x0b7, 0x4b7, 0x2b7, 0x6b7, 0x1b7, 0x5b7, 0x3b7, 0x7b7,
0x077, 0x477, 0x277, 0x677, 0x177, 0x577, 0x377, 0x777, 0x0f7, 0x4f7, 0x2f7, 0x6f7, 0x1f7, 0x5f7, 0x3f7, 0x7f7,
0x00f, 0x40f, 0x20f, 0x60f, 0x10f, 0x50f, 0x30f, 0x70f, 0x08f, 0x48f, 0x28f, 0x68f, 0x18f, 0x58f, 0x38f, 0x78f,
0x04f, 0x44f, 0x24f, 0x64f, 0x14f, 0x54f, 0x34f, 0x74f, 0x0cf, 0x4cf, 0x2cf, 0x6cf, 0x1cf, 0x5cf, 0x3cf, 0x7cf,
0x02f, 0x42f, 0x22f, 0x62f, 0x12f, 0x52f, 0x32f, 0x72f, 0x0af, 0x4af, 0x2af, 0x6af, 0x1af, 0x5af, 0x3af, 0x7af,
0x06f, 0x46f, 0x26f, 0x66f, 0x16f, 0x56f, 0x36f, 0x76f, 0x0ef, 0x4ef, 0x2ef, 0x6ef, 0x1ef, 0x5ef, 0x3ef, 0x7ef,
0x01f, 0x41f, 0x21f, 0x61f, 0x11f, 0x51f, 0x31f, 0x71f, 0x09f, 0x49f, 0x29f, 0x69f, 0x19f, 0x59f, 0x39f, 0x79f,
0x05f, 0x45f, 0x25f, 0x65f, 0x15f, 0x55f, 0x35f, 0x75f, 0x0df, 0x4df, 0x2df, 0x6df, 0x1df, 0x5df, 0x3df, 0x7df,
0x03f, 0x43f, 0x23f, 0x63f, 0x13f, 0x53f, 0x33f, 0x73f, 0x0bf, 0x4bf, 0x2bf, 0x6bf, 0x1bf, 0x5bf, 0x3bf, 0x7bf,
0x07f, 0x47f, 0x27f, 0x67f, 0x17f, 0x57f, 0x37f, 0x77f, 0x0ff, 0x4ff, 0x2ff, 0x6ff, 0x1ff, 0x5ff, 0x3ff, 0x7ff,
};
