/*
 * Drop-in replacement for src/gromacs/utility/coolstuff.cpp
 *
 * Replace the bromacsArray and quoteArray sections with the content below.
 * All other code (headers, beCool(), getPseudoRandomElement(), etc.) stays unchanged.
 *
 * Quotes: King James Version (KJV), 1611 — public domain.
 * Acrostics: original, first letters spell G-R-O-M-A-C-S.
 *
 * This file is a personal modification. It is NOT part of official GROMACS
 * and is NOT affiliated with or endorsed by the GROMACS development team.
 */

// ---------------------------------------------------------------------------
// REPLACE bromacsArray[] with the block below
// ---------------------------------------------------------------------------

    const char* const bromacsArray[] = {
        "God Remains Our Merciful Almighty Creator and Savior",
        "God Reveals Our Maker As Christ our Savior",
        "God Rules Over Mankind, Always Caring and Saving",
        "God Restores Our Minds, Awakening Christ's Servants",
        "God Renews Our Hearts And Changes Souls",
        "God Remains Our Shepherd, Almighty, Compassionate, and Steadfast",
        "God Redeems Our Sins And Cleanses Souls",
        "God's Radiance Overcomes Misery, Anguish, Chaos, and Sorrow",
        "Grace Reigns Over Man, Authored by Christ our Savior",
        "God's Resurrection Overcomes Mortality — Amen, Christ Saves",
        "God Reaches Out, Making All Creation Sacred",
        "Give Rest, O Master, As Christ Saves",
        "God's Righteousness Opens Many A Closed Soul",
        "Grace Received Opens Men, Awakening Christ's Servants",
        "God's Road Opens More As Christ Speaks",
    };

// ---------------------------------------------------------------------------
// REPLACE quoteArray[] with the block below
// ---------------------------------------------------------------------------

    const Quote quoteArray[] = {
        { "I am the way, the truth, and the life: no man cometh unto the Father, but by me.",
          "John 14:6" },
        { "I am the resurrection, and the life: he that believeth in me, though he were dead, yet shall he live.",
          "John 11:25" },
        { "Come unto me, all ye that labour and are heavy laden, and I will give you rest.",
          "Matthew 11:28" },
        { "I am the light of the world: he that followeth me shall not walk in darkness, but shall have the light of life.",
          "John 8:12" },
        { "Peace I leave with you, my peace I give unto you: not as the world giveth, give I unto you.",
          "John 14:27" },
        { "I am the vine, ye are the branches: He that abideth in me, and I in him, the same bringeth forth much fruit.",
          "John 15:5" },
        { "For God so loved the world, that he gave his only begotten Son, that whosoever believeth in him should not perish, but have everlasting life.",
          "John 3:16" },
        { "I am the good shepherd: the good shepherd giveth his life for the sheep.",
          "John 10:11" },
        { "I am the bread of life: he that cometh to me shall never hunger; and he that believeth on me shall never thirst.",
          "John 6:35" },
        { "With men this is impossible; but with God all things are possible.",
          "Matthew 19:26" },
        { "And lo, I am with you alway, even unto the end of the world.",
          "Matthew 28:20" },
        { "Ask, and it shall be given you; seek, and ye shall find; knock, and it shall be opened unto you.",
          "Matthew 7:7" },
        { "I am the Alpha and Omega, the beginning and the ending, saith the Lord.",
          "Revelation 1:8" },
        { "Heaven and earth shall pass away, but my words shall not pass away.",
          "Matthew 24:35" },
        { "Ye shall know the truth, and the truth shall make you free.",
          "John 8:32" },
        { "I am come that they might have life, and that they might have it more abundantly.",
          "John 10:10" },
        { "Let not your heart be troubled: ye believe in God, believe also in me.",
          "John 14:1" },
        { "Greater love hath no man than this, that a man lay down his life for his friends.",
          "John 15:13" },
        { "Blessed are the pure in heart: for they shall see God.",
          "Matthew 5:8" },
        { "Blessed are the peacemakers: for they shall be called the children of God.",
          "Matthew 5:9" },
        { "I am he that liveth, and was dead; and, behold, I am alive for evermore.",
          "Revelation 1:18" },
        { "Behold, I stand at the door, and knock: if any man hear my voice, and open the door, I will come in to him.",
          "Revelation 3:20" },
        { "Fear not; I am the first and the last.",
          "Revelation 1:17" },
        { "Take my yoke upon you, and learn of me; for I am meek and lowly in heart: and ye shall find rest unto your souls.",
          "Matthew 11:29" },
        { "I and my Father are one.",
          "John 10:30" },
        { "Before Abraham was, I am.",
          "John 8:58" },
        { "The Son of man is not come to destroy men's lives, but to save them.",
          "Luke 9:56" },
        { "I am the door: by me if any man enter in, he shall be saved, and shall go in and out, and find pasture.",
          "John 10:9" },
        { "If ye love me, keep my commandments.",
          "John 14:15" },
        { "In my Father's house are many mansions: if it were not so, I would have told you.",
          "John 14:2" },
    };
