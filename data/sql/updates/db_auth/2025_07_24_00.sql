-- DB update 2025_07_03_00 -> 2025_07_24_00
--
ALTER TABLE `account`
    ADD COLUMN `Flags` INT UNSIGNED NOT NULL DEFAULT '0' AFTER `expansion`;
