#pragma once

struct Stats {
    Stats() : maxHp_(0), maxMp_(0), str_(0), dex_(0), int_(0), con_(0), charm_(0), sense_(0), bodySize_(100), headSize_(100) {}
    template <typename T>
    Stats(const T& row) : Stats() {
        loadFromRow(row);
    }

    template <typename T>
    void loadFromRow(const T& row) {
        maxHp_ = row.maxHp;
        maxMp_ = row.maxMp;
        str_ = row.str;
        dex_ = row.dex;
        int_ = row.int_;
        con_ = row.con;
        charm_ = row.charm;
        sense_ = row.sense;
    }

    int32_t maxHp_;
    int32_t maxMp_;
    uint16_t str_;
    uint16_t dex_;
    uint16_t int_;
    uint16_t con_;
    uint16_t charm_;
    uint16_t sense_;
    uint8_t bodySize_;
    uint8_t headSize_;
};

