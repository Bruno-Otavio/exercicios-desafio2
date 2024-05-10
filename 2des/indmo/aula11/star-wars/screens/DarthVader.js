import React from "react";
import { View, Image, StyleSheet } from "react-native";
import colors from "../constants/colors";

const DarthVader = () => {
    return (
        <View style={styles.container}>
            <Image 
                source={{uri: "./assets/darth-vader.jpg"}}
                style={styles.image}
            />
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: colors.blue,
        alignItems: 'center',
        justifyContent: 'center',
    },
    image: {
        width: 250,
        height: 250,
        borderRadius: 10,
    }
})

export default DarthVader;
